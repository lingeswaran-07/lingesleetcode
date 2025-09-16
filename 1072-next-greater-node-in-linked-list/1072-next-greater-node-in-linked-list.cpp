/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    void nextlar(vector<int>&vec,vector<int>&res){
        int n=vec.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--){
           while(!st.empty() && st.top()<=vec[i]){
            st.pop();
           }
           if(!st.empty()){
            res[i]=st.top();
           }
           st.push(vec[i]);
        }

    }
    vector<int> nextLargerNodes(ListNode* head) {
        if(head==NULL){
            return {};
        }
        if(head->next==NULL){
            return {0};
        }
        vector<int>vec;
        ListNode* temp=head;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int n=vec.size();
        vector<int>res(n,0);
        nextlar(vec,res);
        return res;
    }
};