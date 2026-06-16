struct ListNode{
    int data;
    ListNode * next;
    ListNode() : data(0),next(nullptr) {}
    ListNode (int x) : data(x),next(nullptr) {}
    ListNode (int x,ListNode *next) : data(x),next(next) {}   
};




class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int m) {
        ListNode*temp=head;
        int n=0;
        while(temp){
            temp=temp->next;
            n++;
        }
        temp=head;
        if (n == m) {
            return head->next;
        }
        int i=0;
        while(i<n-m-1){
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
        return head;
    }
};