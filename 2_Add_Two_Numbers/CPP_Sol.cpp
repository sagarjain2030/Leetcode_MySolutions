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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* head_new = nullptr;
        ListNode* merged_node = nullptr;
        if(!l1 && !l2)
            return nullptr;
        else if(!l1)
            return l2;
        else if(!l2)
            return l1;
        else
        {
            int carry = 0;
            while(l1 && l2)
            {
                int tot = l1->val + l2->val + carry;
                int x = tot % 10;
                carry = floor(tot / 10);
                l1 = l1->next;
                l2 = l2->next;
                ListNode* new_node = new ListNode(x);
                if(!head_new)
                {
                    head_new = new_node;
                    merged_node = head_new;
                }
                else
                {
                    head_new->next = new_node;
                    head_new = head_new->next;
                }
            }
            while(l1)
            {
                int tot = l1->val + carry;
                int x = tot % 10;
                carry = floor(tot / 10);
                l1 = l1->next;
                ListNode* new_node = new ListNode(x);
                head_new->next = new_node;
                head_new = head_new->next;
            }
            while(l2)
            {
                int tot = l2->val + carry;
                int x = tot % 10;
                carry = floor(tot / 10);
                l2 = l2->next;
                ListNode* new_node = new ListNode(x);
                head_new->next = new_node;
                head_new = head_new->next;
            }
            if(carry > 0)
            {
                ListNode* new_node = new ListNode(carry);
                head_new->next = new_node;
                head_new = head_new->next;
            }

            return merged_node;
        }
    }


};