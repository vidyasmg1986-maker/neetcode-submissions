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
    TreeNode* bst(TreeNode* root){
        while(root->left != NULL){
            root = root->left;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
         return NULL;
        if(root->val == key){
            if(root->left == NULL && root->right == NULL){
                root=NULL;
            }
            else if(root->left == NULL){
                root=root->right;
            }
            else if(root->right == NULL){
                root=root->left;
            }
            else{
                TreeNode* child = bst(root->right);
                root->val= child->val;
                root->right = deleteNode(root->right, child->val);
            }
            return root;
        }
        else if(root->val < key){
            root->right = deleteNode(root->right,key);
        }
        else{
            root->left = deleteNode(root->left,key);
        }
        return root;
    }
};