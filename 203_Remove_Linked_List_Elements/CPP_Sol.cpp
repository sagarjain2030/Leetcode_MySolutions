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
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode* temp = new ListNode;
        temp->next = head;
        if(!head)
            return nullptr;
        ListNode* prev = temp;
        ListNode* curr = head;
        ListNode* toDelete = nullptr;
        
        while(curr != nullptr)
        {
            if(curr->val == val)
            {
                prev->next = curr->next;
                toDelete = curr;
            }
            else
                prev = curr;
            curr = curr->next;
            if(toDelete)
            {
                delete toDelete;
                toDelete = nullptr;
            }
        }
        
        ListNode* ret = temp->next;
        delete temp;
        return ret;
    }
};