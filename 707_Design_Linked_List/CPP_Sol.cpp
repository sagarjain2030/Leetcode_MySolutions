class Node
{
    public:
        int val;
        Node* next;
        Node(int new_val) : val(new_val), next(NULL){}
};

class MyLinkedList {
public:
    Node* head;
    int size;
    MyLinkedList() 
    {
        head = NULL;
        size = 0;
    }
    
    int get(int index) 
    {
        if(size == 0 || index >= size || index < 0)
            return -1;
        if(!head)
            return -1;
        Node* curr_node = head;
        for(int i = 0; i < index; i++)
            curr_node = curr_node->next;
        return curr_node->val;
    }
    
    void addAtHead(int val)
    {
        if(!head)
            head = new Node(val);
        else
        {
            Node* new_node = new Node(val);
            new_node->next = head;
            head = new_node;
        }
        size++;
    }
    
    void addAtTail(int val) 
    {
        if(!head)
            head= new Node(val);
        else
        {
            Node* curr_node = head;
            while(curr_node->next)
                curr_node = curr_node->next;
            curr_node->next = new Node(val);       
        }
        size++;
    }
    
    void addAtIndex(int index, int val) 
    {
        if(index < 0 || index > size)
            return;
        if(index == 0)
        {
            addAtHead(val);
            return;
        }
        else
        {
            Node* curr_node = head;
            Node* new_node = new Node(val);
            for(int i = 0 ; i < index - 1; i++)                
                curr_node = curr_node->next;
            new_node->next = curr_node->next;
            curr_node->next = new_node;
        }
        size++;
    }
    
    void deleteAtIndex(int index) 
    {
        if(index < 0 || index >= size)
            return;
        if(index == 0)
        {
            Node* curr = head;
            head = head->next;
        }
            
        else
        {
            Node* curr_node = head;
            for(int i = 0; i < index - 1; i++)
                curr_node = curr_node->next;
            Node* deleteNode = curr_node->next;
            curr_node->next = curr_node->next->next;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */