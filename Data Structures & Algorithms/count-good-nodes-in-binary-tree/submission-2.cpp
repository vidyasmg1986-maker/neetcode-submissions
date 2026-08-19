/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int find(TreeNode* root,int maxi){
        if(root == NULL){
            return 0;
        }
        int cnt =0;
        if(root->val >= maxi){
            cnt+=1;
        }
        if(root->left != NULL){
            cnt+=find(root->left,max(maxi,root->val));
        }
        if(root->right != NULL){
            cnt+=find(root->right,max(maxi,root->val));
        }
        return cnt;
    }
    int goodNodes(TreeNode* root) {
        int n=find(root,INT_MIN);
        return n;
        
    }
};
