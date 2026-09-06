class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (head == NULL || left == right)
            return head;

        // Dummy helps when left = 1
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // Move prev to the node just before 'left'
        ListNode* prev = dummy;

        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        // curr = first node of the section to reverse
        ListNode* curr = prev->next;

        // Reverse the section
        for (int i = 0; i < right - left; i++) {
            ListNode* temp = curr->next;

            curr->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }

        return dummy->next;
    }
};