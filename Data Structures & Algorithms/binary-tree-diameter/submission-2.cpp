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
    int diat(TreeNode* root,int& dia){
        if(root == NULL) return 0;
        int left=0,right=0;
        if(root->left != NULL){
            left = 1+diat(root->left,dia);
        }
        if(root->right != NULL){
            right = 1+diat(root->right,dia);
        }
        dia=max(dia,right+left);

        return max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int dia = 0;
        diat(root,dia);
        return dia;
    }
};
