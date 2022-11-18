/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

class Solution {
public:
    Node* insert(Node* head, int insertVal) 
    {
        Node* new_node = new Node(insertVal);
        if(!head)
        {
            new_node->next = new_node;
            return new_node;
        }
        Node* prev = head;
        Node* curr = head->next;
        while(prev->next != head)
        {
            if(prev->val <= new_node->val <= curr->val)
                break;
            if((prev->val > curr->val) && ((new_node->val > prev->val) || (new_node->val < curr->val)))  
                break;
            prev = prev->next;
            curr = curr->next;
        }

        new_node->next = curr;
        prev->next = new_node;
        return head;
    }
};