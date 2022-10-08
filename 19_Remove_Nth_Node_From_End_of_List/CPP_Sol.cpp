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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        if(!head) return nullptr;       
        ListNode* dummy_node = new ListNode();
        dummy_node->next = head;
        ListNode* fp = dummy_node;
        for(int i = 1; i <= n+1 ; i++)
            fp = fp->next;
        ListNode* sp = dummy_node;
        while(fp)
        {
            fp = fp->next;
            sp = sp->next;
        }
        sp->next = sp->next->next;
        return dummy_node->next;

    }
};