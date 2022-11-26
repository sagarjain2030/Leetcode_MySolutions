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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(!head || !head->next)
            return head;
        int count = 1;
        ListNode* curr = head;
        while(curr->next)
        {
            curr = curr->next;
            count++;
        }        
        curr->next = head;
        int shift = k % count;
        if(shift == 0)
        {
            curr->next = nullptr;
            return head;
        }
        int move = count - shift;
        curr = head;
        ListNode* prev = new ListNode();
        prev->next = head;
        while(move)
        {
            curr = curr->next;
            prev = prev->next;
            move--;
        }
        head = curr;
        prev->next = nullptr;
        return head;
    }
};