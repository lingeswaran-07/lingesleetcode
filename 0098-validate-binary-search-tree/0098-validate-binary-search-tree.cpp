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
    bool valid(TreeNode* root,long long minval,long long maxval){
        if(root==NULL) return true;
        if(root->val<=minval || root->val>=maxval){
            return false;
        }
        return valid(root->left,minval,root->val) && valid(root->right,root->val,maxval);
    }
public:
    bool isValidBST(TreeNode* root) {
        long long maxi=LLONG_MAX;
        long long mini=LLONG_MIN;
        return valid(root,mini,maxi);
    }
};