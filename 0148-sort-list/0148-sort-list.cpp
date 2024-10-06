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
//    ListNode *converttolink(vector<int>&vec){
//     if(vec.size()==0) return NULL;
//     ListNode *head=new ListNode(vec[0]);
//     ListNode *temp=head;
//     for(int i=1;i<vec.size();i++){
//         ListNode *newnode=new ListNode(vec[i]);
//         temp->next=newnode;
//         temp=temp->next;
//     }
//     return head;
//    }

   ListNode *findmiddle(ListNode *head){
      if(head==NULL || head->next==NULL) return head;
      ListNode *slow=head;
      ListNode *fast=head->next;
      while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
      }
      return slow;
   }

     ListNode* mergel(ListNode *list1,ListNode *list2){
        ListNode *dummy=new ListNode(-1);
        ListNode *temp=dummy;
        while(list1!=NULL && list2!=NULL){
            if(list1->val < list2->val){
                temp->next=list1;
                temp=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                temp=list2;
                list2=list2->next;

            }

        }
        if(list1) temp->next=list1;
        else{
            temp->next=list2;
        }
        return dummy->next;

     }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *middle=findmiddle(head);
        ListNode *right=middle->next;
        middle->next=NULL;
        ListNode *left=head;

        left=sortList(left);
        right=sortList(right);

        return mergel(left,right);

    
    }

};