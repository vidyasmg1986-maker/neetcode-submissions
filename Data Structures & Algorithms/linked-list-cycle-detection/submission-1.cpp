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
    bool hasCycle(ListNode* head) {
        map<ListNode*,int> m;
        while(head != NULL){
            ListNode* node = head;
            if(m.find(node) != m.end()){
                return true;
            }
            else{
                m[node]+=1;
            }
            head= head->next;
        }
        return false;
    }
};
