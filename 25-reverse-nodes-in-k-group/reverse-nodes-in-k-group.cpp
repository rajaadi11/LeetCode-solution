/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getlength(ListNode* &head){
        ListNode* temp = head;
        int len=0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        //empty LL. or single node.
        if(head == NULL || head->next == NULL){
            return head;
        }
        int len = getlength(head);
        if(len < k){
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        int position = 0;
        while(position < k){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            position ++;
        }
        // baki recursion sambhalege
        if(curr != NULL){
            ListNode* RecursionKahead = reverseKGroup(curr,k);
            head->next = RecursionKahead;
        }
       return prev; 
    }
};