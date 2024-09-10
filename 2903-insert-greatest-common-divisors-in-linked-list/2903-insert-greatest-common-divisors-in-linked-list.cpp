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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast != NULL){
            int tempVal = __gcd(fast->val, slow->val);
            ListNode* temp = new ListNode(tempVal);
            slow->next = temp;
            temp->next = fast;
            slow = fast;
            fast = fast->next;
        }
        return head;
    }
};