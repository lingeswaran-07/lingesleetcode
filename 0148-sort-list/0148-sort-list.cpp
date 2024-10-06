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
   ListNode *converttolink(vector<int>&vec){
    if(vec.size()==0) return NULL;
    ListNode *head=new ListNode(vec[0]);
    ListNode *temp=head;
    for(int i=1;i<vec.size();i++){
        ListNode *newnode=new ListNode(vec[i]);
        temp->next=newnode;
        temp=temp->next;
    }
    return head;
   }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *temp=head;
        vector<int>vec;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        sort(vec.begin(),vec.end());
        return converttolink(vec);

        
    }
};