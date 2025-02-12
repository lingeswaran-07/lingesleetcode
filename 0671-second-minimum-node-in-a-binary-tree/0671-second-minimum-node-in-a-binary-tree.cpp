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
    void find(TreeNode* root,int &fmin,long long& smin){
        if(!root) return;
        if(root->val>fmin && root->val<smin){
            smin=root->val;
        }
         find(root->left,fmin,smin);
        find(root->right,fmin,smin);
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        if(!root) return -1;
        int fmin=root->val;
        long long smin=LLONG_MAX;
        find(root,fmin,smin);
        return (smin!=LLONG_MAX)?static_cast<int>(smin):-1;
        
    }
};