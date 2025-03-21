class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast= head;
        ListNode* slow= head;
        if(head == nullptr) return false;
        while(fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};