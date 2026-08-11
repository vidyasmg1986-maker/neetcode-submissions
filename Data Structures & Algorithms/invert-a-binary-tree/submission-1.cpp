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
    void invert(TreeNode* node,TreeNode* root){
        if(root == NULL) return;

        node->val = root->val;

        if(root->left != NULL){
        node->right = new TreeNode();
        invert(node->right,root->left);}

        if(root->right != NULL){
        node->left = new TreeNode();
        invert(node->left,root->right);}
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL ) return NULL;
       TreeNode* node = new TreeNode(); 
       invert(node,root);
       return node; 
    }
};
