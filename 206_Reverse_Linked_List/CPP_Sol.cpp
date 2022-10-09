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
    ListNode* reverseList(ListNode* head) 
    {
        if(!head)
            return nullptr;
        if(!head->next)
            return head;
        else
        {
            ListNode* rev_head = nullptr;
            ListNode* current_node = head;
            while(current_node)
            {
                ListNode* new_Node = new ListNode(current_node->val);
                if(!rev_head)
                    rev_head = new_Node;
                else
                {
                    new_Node->next = rev_head;
                    rev_head = new_Node;
                }                
                current_node = current_node->next;
            }
            return rev_head;
        }        
    }
};