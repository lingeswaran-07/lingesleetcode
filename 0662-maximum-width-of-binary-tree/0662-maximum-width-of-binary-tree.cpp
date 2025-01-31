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
    int widthOfBinaryTree(TreeNode* root) {
        int ans=0;
        if(!root) return ans;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int mmin=q.front().second;
            int f,l;
            int size=q.size();
            for(int i=0;i<size;i++){
                int cur=q.front().second-mmin;
                TreeNode *node=q.front().first;
                q.pop();
                if(i==0) f=cur;
                if(i==size-1) l=cur;
                if(node->left){
                    q.push({node->left,(long long)cur*2+1});
                }
                if(node->right){
                    q.push({node->right,(long long)cur*2+2});
                }
                
            }
            ans=max(ans,l-f+1);
        }
        return ans;
        
    }
};