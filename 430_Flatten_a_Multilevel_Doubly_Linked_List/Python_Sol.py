"""
# Definition for a Node.
class Node:
    def __init__(self, val, prev, next, child):
        self.val = val
        self.prev = prev
        self.next = next
        self.child = child
"""

class Solution:
    def flatten(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if(not head):
            return None
        else:
            curr  = head
            while(curr):
                if(curr.child is not None):
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
            return head