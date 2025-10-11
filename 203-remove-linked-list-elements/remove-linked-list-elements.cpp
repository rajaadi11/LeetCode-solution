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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return NULL;
        }

        while (head != NULL && head->val == val) {
            ListNode* todelete = head;
            head = head->next;
            delete todelete;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr != NULL){
            if(curr->val == val){
               ListNode* todelete = curr;
                prev->next = curr->next;
                curr = curr->next;
                delete todelete;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};