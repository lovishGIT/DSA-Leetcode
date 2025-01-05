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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(-1);  // Dummy node to start the list
        ListNode* ansl = ans;
        while(l1 != nullptr && l2 != nullptr) {
            if(l1->val <= l2->val) {
                ansl->next = new ListNode(l1->val);
                l1 = l1->next;
            } else if(l1->val > l2->val) {
                ansl->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            ansl = ansl->next;
        }
        if(l1 != nullptr) {
            ansl->next = l1;
        }
        if(l2 != nullptr) {
            ansl->next = l2;
        }
        return ans->next;
    }
};