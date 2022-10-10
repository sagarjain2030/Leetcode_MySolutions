# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        if(head is None):
            return head
        else:
            tail = head
            while(tail):
                if(tail.val == val):
                    head = tail.next
                    tail = head
                elif(tail.next and tail.next.val == val):
                    if(tail.next.next is None):
                        tail.next = None
                    else:
                        tail.next = tail.next.next
                else:
                    tail = tail.next
        return head                        
        