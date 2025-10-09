class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // base cases
        if (!head || !head->next) return head;

        // nodes to swap
        ListNode* first = head;
        ListNode* second = head->next;

        // swap
        first->next = swapPairs(second->next);
        second->next = first;

        // second becomes new head
        return second;
    }
};
