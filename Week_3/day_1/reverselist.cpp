
#include<stdlib.h>
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

// provided is the struct of ListNode ,,
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*prev =NULL;
        ListNode* current=head;
        while(current){
            ListNode*nextnode= current->next;
            current->next=prev;
            prev=current;
            current=nextnode;
        }
        return prev;
    }
};