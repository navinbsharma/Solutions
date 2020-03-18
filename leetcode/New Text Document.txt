/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long val1,val2,val3,sum=0;
        int carry=0;
        ListNode *head = new ListNode(-1);
        ListNode *list = head;
        while(l1 != NULL || l2 != NULL){
            val1=0,val2=0,val3=0;
            if(l1 != NULL){
                val1 = l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                val2 = l2->val;
                l2 = l2->next;
            }
            val3 = val1+val2 + carry;
            
            carry = val3/10;
            
            head->next = new ListNode(val3%10);
            head = head->next;
        }
        if(carry!=0){
            head->next = new ListNode(carry);
            head = head->next;
            
        }
        return list->next;
    }
};