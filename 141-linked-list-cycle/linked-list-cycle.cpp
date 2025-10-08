/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
                if(fast == slow){
                    return true;
                }
            }

        }
        return false;
    // 2nd method
        // ListNode* temp = head;
        // unordered_map<ListNode* , bool> mp;
        // while(temp != NULL){
        //     if(mp[temp] == true){
        //         return true;
        //     }
        //     else{
        //         mp[temp]  = true;
        //     }
        //     temp = temp->next;
        // }
        // return false;
    }
};