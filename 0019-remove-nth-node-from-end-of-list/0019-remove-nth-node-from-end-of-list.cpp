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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL || (head->next == NULL && n ==1))return NULL;

        ListNode* temp = head;
        
        int i=0;
        while(temp != NULL){
            temp = temp->next;
            i++;
        }
        int count = i-n;
        i=1;
        temp = head;
        if(count >= i){
            while(count != i){
                temp = temp->next;
                i++;
            }
            temp->next = temp->next->next;
            return head;
        }
        return head->next;
    }
};