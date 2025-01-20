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
    void postorder(TreeNode* root,vector<int>&vec){
     
     TreeNode *node=root;
     if(root==NULL) return ;
    
     postorder(node->left,vec);
     postorder(node->right,vec);
     vec.push_back(node->val);
   
  }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>vec;
        postorder(root,vec);
        return vec;
    }
};