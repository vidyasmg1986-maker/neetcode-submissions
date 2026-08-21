class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            ListNode* nxt = curr->next; // Save next node
            curr->next = prev;          // Reverse the link
            prev = curr;                // Move prev forward
            curr = nxt;                 // Move curr forward
        }
        
        return prev; // New head of reversed list
    }
};
