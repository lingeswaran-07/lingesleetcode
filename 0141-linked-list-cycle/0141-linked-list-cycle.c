/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast,*slow;
    fast=slow=head;
  
    while(fast!=0 && fast->next!=0){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
        
        return true;
        }
    }
    
    return false;
}