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
    int findcam(TreeNode* root,int& cnt){
        if(root==NULL){
            return 1;
        }
        int l=findcam(root->left,cnt);
        int r=findcam(root->right,cnt);
        if(l==0 || r==0){
            cnt++;
            return 2;
        }
        if(l==2 ||r==2) return 1;
        return 0;
    }
public:
    int minCameraCover(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int cnt=0;
        if(findcam(root,cnt)==0){
           cnt++;
        }
        return cnt;
    }
};