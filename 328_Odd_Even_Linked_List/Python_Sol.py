# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if(not head):
            return None
        if(not head.next):
            return head
        odd_ptr = head
        even_ptr,even_ptr1 = head.next,head.next
        curr_node = head
        count = 1
        temp = head
        while(curr_node):
            if(count & 1):
                odd_ptr = curr_node
                temp = curr_node.next
                if curr_node.next:
                    odd_ptr.next = curr_node.next.next
                count += 1
            else:
                even_ptr = curr_node
                temp = curr_node.next
                if curr_node.next:
                    even_ptr.next = curr_node.next.next
                count += 1
            curr_node = temp
        odd_ptr.next = even_ptr1
        return head