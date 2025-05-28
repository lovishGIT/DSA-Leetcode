class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* newlist = new ListNode();
        ListNode* temp = newlist;

        while(l1!=nullptr && l2!=nullptr) {
            if(l1->val <= l2->val) {
                newlist->next = l1;
                l1 = l1->next; 
            } else {
                newlist->next = l2;
                l2 = l2->next; 
            }
            newlist = newlist->next;
        }

        while(l1!=nullptr) {
            newlist->next = l1;
            l1 = l1->next;
            newlist = newlist->next;
        }

        while(l2!=nullptr) {
            newlist->next = l2;
            l2 = l2->next;  
            newlist = newlist->next;
        }

        return temp->next;
    }
};