class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while(temp != NULL) {
            size++;
            temp = temp -> next;
        }

        delete temp;

        if(size==1) return NULL;
        if(size==n) return head->next;

        ListNode* ans = head;
        while(size > n + 1) {
            head = head -> next;
            size--;
        }

        if(head->next == NULL) return ans;

        head -> next = head->next->next;

        return ans;
    }
};