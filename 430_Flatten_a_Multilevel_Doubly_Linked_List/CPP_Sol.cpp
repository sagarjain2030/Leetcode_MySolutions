/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
/*
                    temp_next = curr.next
                    temp_child = curr.child
                    curr.child = None
                    curr.next = temp_child
                    temp_child.prev = curr
                    new_curr = temp_child
                    while(new_curr.next is not None):
                        new_curr = new_curr.next
                    new_curr.next = temp_next
                    if(temp_next is not None):
                        temp_next.prev = new_curr
                curr = curr.next
*/

class Solution {
public:
    Node* flatten(Node* head) 
    {
        if(!head)
            return nullptr;
        Node* curr = head;
        while(curr)
        {
            if(curr->child)
            {
                Node* temp_next = curr->next;
                Node* temp_child = curr->child;
                curr->child = nullptr;
                curr->next = temp_child;
                temp_child->prev = curr;
                Node* new_curr = temp_child;
                while(new_curr->next)
                    new_curr = new_curr->next;
                new_curr->next = temp_next;
                if(temp_next) 
                    temp_next->prev = new_curr;
            }

            curr = curr->next;
        }

        return head;
    }
};