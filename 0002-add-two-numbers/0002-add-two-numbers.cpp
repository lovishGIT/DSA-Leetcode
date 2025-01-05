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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry= 0;
        ListNode* temp = l1;
        ListNode* prev = nullptr;
        while(l1 != nullptr || l2 != nullptr || carry!= 0) {
            int sum= carry;
            if(l2!=nullptr) {
                sum += l2->val;
                l2= l2->next;
            }
            if(l1!=nullptr) {
                sum += l1->val;
            }
            carry= sum/10;
            sum = sum % 10;
            if(l1!=nullptr) { 
                l1->val = sum;
                prev= l1;
                l1=l1->next;
            } else {
                prev->next= new ListNode(sum);
                prev= prev->next;
            }
        }
        return temp;
    }
};