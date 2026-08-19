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
    bool validity(TreeNode* root,int n,int m){
        if(root == NULL)return true;
        bool l = true, r = true;
        if(root->left != NULL){
            if(n< root->left->val && root->left->val < root->val ){
            l = validity(root->left,n,root->val);
            }
            else{
            return false;
            }
        }
        if(root->right != NULL){
            if(root->val < root->right->val && root->right->val < m ){
            r = validity(root->right,root->val,m);
            }
            else{
            return false;
            }
        }
        return l&&r;
    }
    bool isValidBST(TreeNode* root) {
        return validity(root,INT_MIN,INT_MAX);
    }
};
