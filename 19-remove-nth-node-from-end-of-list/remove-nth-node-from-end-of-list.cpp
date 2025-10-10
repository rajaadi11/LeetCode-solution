class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == NULL) {
            delete head;
            return NULL;
        }

        // Step 1: find the length of the list
        int len = 0;
        ListNode* it = head;
        while (it) {
            len++;
            it = it->next;
        }

        // If we need to delete the head node
        if (n == len) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Step 2: find the node *before* the one we want to delete
        ListNode* prev = head;
        for (int i = 1; i < len - n; i++) {
            prev = prev->next;
        }

        // Step 3: delete the target node
        ListNode* deleteptr = prev->next;
        prev->next = deleteptr->next;
        delete deleteptr;

        return head;
    }
};
