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

   int bbt(TreeNode* root){
        if(root==NULL) return 0;
        int l=bbt(root->left);
        if(l==-1) return -1;
        int r=bbt(root->right);
        if(abs(l-r)>1) return -1;
        if(r==-1) return -1;
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        return bbt(root)!=-1;
    }
};