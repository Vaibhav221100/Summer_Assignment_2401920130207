#include<stdlib.h>
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head==NULL || head->next==NULL){
            return true;
        }
        ListNode *slow=head;
        ListNode *fast=head;

        while (fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode*prev=NULL;
        ListNode*current=slow;
        while(current!=NULL){
                ListNode* nextnode=current->next;
                current->next=prev;
                prev=current;
                current=nextnode;
            }
        ListNode* second_half_start=prev;
        while(second_half_start!=NULL){
            if (head->val!=second_half_start->val)
                return false;
            head=head->next;  
            second_half_start=second_half_start->next;
            }
        
        return true;
    }
};