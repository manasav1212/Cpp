//Problem: https://leetcode.com/problems/add-two-numbers/description/

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
        ListNode* l3 = new ListNode(0);
        ListNode* dummy = l3;
        int carry = 0;
        while(l1 != NULL || l2 != NULL || carry != 0)
        {
            int sum1 = 0,sum2 = 0;
            if(l1!=NULL)
            {
                sum1 = l1->val;
                l1 = l1->next;
            }                
            if(l2!=NULL)
            {
                sum2 = l2->val;
                l2 = l2->next;
            }
                
            int sum = sum1+sum2+carry;
            int newval = sum%10;
            carry = sum/10;

            ListNode* newNode = new ListNode(newval);
            dummy->next = newNode;
            dummy = dummy->next;
        }
        ListNode* res = l3->next;
        delete l3;
        return res;
    }
};