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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int>vec;
        for(int i=0;i<lists.size();i++){
            ListNode *temp=lists[i];
            while(temp!=NULL){
                vec.push_back(temp->val);
                temp=temp->next;

            }

        }
        sort(vec.begin(),vec.end());
        return converttolink(vec);
    }
};