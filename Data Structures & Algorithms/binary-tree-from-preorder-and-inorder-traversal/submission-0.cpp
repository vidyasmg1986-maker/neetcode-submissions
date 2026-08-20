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
    int preIndex = 0;
    TreeNode* construct(vector<int>& preorder,vector<int>& inorder,int mini,int maxi){
        if(mini > maxi){
            return NULL;
        }
        int index;
        TreeNode* node = new TreeNode(preorder[preIndex]);
        preIndex++;
        if(find(inorder.begin()+mini,inorder.begin()+maxi,preorder[mini]) != inorder.end()){
        index = find(inorder.begin()+mini,inorder.begin()+maxi+1,         
        node->val) - inorder.begin();
        }

        TreeNode *ln=NULL,*rn=NULL;
        if(index >= mini){
        ln = construct(preorder,inorder,mini,index-1); 
        }
        if(index <= maxi){
        rn = construct(preorder,inorder,index+1,maxi);
        }

        node->left = ln;
        node->right = rn;
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    TreeNode* node = construct(preorder,inorder,0,inorder.size()-1);
    return node;
    }
};
