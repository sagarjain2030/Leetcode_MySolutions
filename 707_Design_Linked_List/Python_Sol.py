class Node(object):
    def __init__(self,val):
        self.val = val
        self.next = None 

class MyLinkedList:

    def __init__(self):
        self.head = None
        self.size = 0
        
    def get(self, index: int) -> int:
        if(index >= self.size or index < 0):
            return -1
        curr_node = self.head
        for _ in range(0,index):
            curr_node = curr_node.next
        return curr_node.val
        #return -1                

    def addAtHead(self, val: int) -> None:
        new_node = Node(val)
        if(not self.head):
            self.head = new_node
        else:
            new_node.next = self.head
            self.head = new_node
        self.size += 1

    def addAtTail(self, val: int) -> None:
        new_node = Node(val)
        if(not self.head):
            self.head = new_node
        else:
            curr_node = self.head
            while(curr_node.next):
                curr_node = curr_node.next
            curr_node.next = new_node
        self.size += 1

    def addAtIndex(self, index: int, val: int) -> None:
        if(index < 0 or index > self.size):
            return
        new_node = Node(val)
        curr_node = self.head
        if(index == 0):
            new_node.next = self.head
            self.head = new_node
        else:
            for _ in range(index - 1):
                curr_node = curr_node.next
            new_node.next = curr_node.next
            curr_node.next = new_node
        self.size += 1			

    def deleteAtIndex(self, index: int) -> None:
        if(index < 0 or self.size <= index):
            return
        if(not self.head):
            return
        curr_node = self.head
        if(index == 0):
            self.head = self.head.next
        else:
            for _ in range(index - 1):
                curr_node = curr_node.next
            curr_node.next = curr_node.next.next
        self.size -= 1