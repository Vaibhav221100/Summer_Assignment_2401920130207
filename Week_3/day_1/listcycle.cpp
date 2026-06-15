#include<stdlib.h>
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

// provided is the struct of ListNode ,,
#include<iostream>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=nullptr){      
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast) return true;
        }
        return false;
    }
};