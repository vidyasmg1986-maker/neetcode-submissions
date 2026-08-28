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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0,rem=0;
        sum=l1->val+l2->val+rem;
        rem=(sum)/10;
        ListNode* head = new ListNode(sum%10);
        ListNode* temp = head;
        l1=l1->next;
        l2=l2->next;
        while(l1!= NULL or l2!= NULL){
        
        if(l1 != NULL && l2 != NULL)
    sum = l1->val + l2->val + rem;
else if(l1 != NULL)
    sum = l1->val + rem;
else
    sum = l2->val + rem;

        rem=(sum)/10;
        ListNode* node = new ListNode(sum%10);
        temp->next = node;
        temp=temp->next;
        if(l1 != NULL)
    l1 = l1->next;

if(l2 != NULL)
    l2 = l2->next;
        }
        while(rem != 0){
            ListNode* node = new ListNode(rem);
            temp->next = node;
            temp = temp->next;
            rem = rem/10;
        }
        return head;
    }
};
