"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if(not head):
            return None
        curr = head
        while(curr is not None):
            new_node = Node(curr.val)
            new_node.next = curr.next
            curr.next = new_node
            curr = curr.next.next
        curr = head
        new_head = head.next
        while(curr):
            print(curr.val)
            if(curr.random is None):
                curr.next.random = None
            else:
                curr.next.random = curr.random.next
            curr = curr.next.next
        curr  = head
        while(curr and curr.next):
            temp = curr.next.next
            if(temp is None):
                curr.next.next = None
                curr.next = None
            else:
                curr.next.next = temp.next
                curr.next = temp
            curr = curr.next
        return new_head