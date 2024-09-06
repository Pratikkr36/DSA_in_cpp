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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> numset(nums.begin(), nums.end());
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* cur = head;
        ListNode* prev = dummy;
        while(cur != NULL){
            if(numset.find(cur->val) != numset.end()){
                prev->next = cur->next;
                cur = cur->next;
            }else{
                prev = cur;
                cur = cur->next;
            }
        }
        return dummy->next;
    }
};