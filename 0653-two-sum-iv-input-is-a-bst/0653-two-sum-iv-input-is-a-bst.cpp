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
class BSTIterator {
    stack<TreeNode*>st;
    bool reverse;
public:
    BSTIterator (TreeNode* root,bool isReverse){
    reverse=isReverse;
    pushall(root);
   }    

   bool hasNext(){
    return !st.empty();
   }

   int next(){
    TreeNode* node=st.top();
    st.pop();
    if(!reverse) pushall(node->right);
    else pushall(node->left);
    return node->val;

   }
private:
   void pushall(TreeNode * node){
    while(node!=NULL){
        st.push(node);
    if(reverse==true){
        node=node->right;
    }
    else{
        node=node->left;
    }
   }
   }
   };
class Solution {
public: 
    bool findTarget(TreeNode* root, int k) {
       if(root==NULL) return false;
        BSTIterator l(root,false);
        BSTIterator r(root,true);
       int i=l.next();
       int j=r.next();
       while(i<j){
        if(i+j==k) return true;
        else if(i+j >k) j=r.next();
        else i=l.next();
       }
    
    return false;
}
};