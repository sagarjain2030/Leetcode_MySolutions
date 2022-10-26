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
    bool isPalindrome(ListNode* head)
    {
        if(!head || !(head->next))
            return true;
        std::string s = "";    
        ListNode* curr = head;
        while(curr)
        {
            s += char(curr->val);
            curr =  curr->next;
        }

        int i = 0;
        int j = s.size() - 1;
        while(i <= j)
        {
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        } 

        return true;        
    }
};