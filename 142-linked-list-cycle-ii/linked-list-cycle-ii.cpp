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
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode* , bool> mp;
        while(temp != NULL){
            if(mp[temp] == true){
                return temp;
            }
            else{
                mp[temp] = true;
                temp = temp->next;
            }
        }
        return nullptr;

        
    }
};