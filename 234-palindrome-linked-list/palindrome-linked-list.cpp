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
    ListNode* getmiddle(ListNode* &head, ListNode* &middlekaprev){
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                middlekaprev = slow;
                slow = slow->next;
            }
        }
        return slow;
    }

    ListNode* reverse(ListNode* prev , ListNode*curr){
        while(curr != NULL){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return true;
        }
        if(head->next == NULL){
            return true;
        }
        ListNode* firsthalfkahead = head;
        ListNode* middlekaprev = NULL;
        ListNode* middleNode = getmiddle(head, middlekaprev);
        middlekaprev->next = NULL;

        //reverse 2nd half
        ListNode* prev = NULL;
        ListNode* curr = middleNode;
        ListNode* secondhalfkahead = reverse(prev ,curr); 
        ListNode* temphead1 = firsthalfkahead;
        ListNode* temphead2 = secondhalfkahead;
        while(temphead1 != NULL){
            if(temphead1->val != temphead2->val)
            {
                return false;
            }
            else{
                temphead1 = temphead1->next;
                temphead2 = temphead2->next;
            }
        }
        return true;
    }
};