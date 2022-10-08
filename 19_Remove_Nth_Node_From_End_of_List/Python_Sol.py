# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if(head is None):
            return None
        elif(head.next is None and n == 1):
            return None
        elif(head.next.next is None):
            if(n == 1):
                head.next = None
            else:
                head = head.next
            return head
        dummy_node = ListNode()
        dummy_node.next = head
        fp,counter = dummy_node,n
        for i in range(1,n+2):
            fp = fp.next
        sp = dummy_node
        while(fp is not None):
            fp = fp.next
            sp = sp.next
        sp.next = sp.next.next
        return dummy_node.next