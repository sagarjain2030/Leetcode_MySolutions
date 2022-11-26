# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if(head is None):
            return None
        if (head.next is None):
            return head
        count = 1
        curr = head
        while(curr.next):
            curr = curr.next
            count += 1
        curr.next = head
        shift = k % count
        if (shift == 0):
            curr.next = None
            return head
        move = count - shift
        curr = head
        prev = ListNode()
        prev.next = head
        while(move):
            curr = curr.next
            prev = prev.next
            move -= 1
        head = curr
        prev.next = None
        return head