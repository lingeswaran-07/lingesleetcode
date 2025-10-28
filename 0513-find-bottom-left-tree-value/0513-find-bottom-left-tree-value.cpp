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
    int findBottomLeftValue(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return root->val;
        if(root==NULL) return -1;
        if(root->left==NULL) root=root->right;
        int ans=-1;
        queue<TreeNode*>q;
        q.push(root);
        ans=root->val;
        vector<vector<int>>vec;
        while(!q.empty()){
            int size=q.size();
            vector<int>lev;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                lev.push_back(node->val);
                if(node->left){
                    ans=node->left->val;
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            vec.push_back(lev);
        }
        int n=vec.size()-1;
        return vec[n][0];
    }
};