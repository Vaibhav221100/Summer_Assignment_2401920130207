
  struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0),next(nullptr) {}
    ListNode(int x) :val(x) ,next(nullptr) {}
    ListNode(int x,ListNode*next) : val(x),next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*dummy=new ListNode(0);
        ListNode*temp=dummy;
        ListNode*p1=list1;
        ListNode*p2=list2;
        while(p1!=nullptr && p2!=nullptr){
            if (p2->val>=p1->val){
                temp->next=p1;
                p1=p1->next;
            }
            else{
                temp->next=p2;
                p2=p2->next;
            }
            temp=temp->next;
        }
        if (p1!=nullptr) temp->next=p1;
        else temp->next=p2;

        return dummy->next;
    }
};