# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        sum_node = None
        start_sum = None
        if(not l1):
            return l2
        elif(not l2):
            return l1
        else:
            carry = 0
            while(l1 and l2):
                tot = l1.val + l2.val + carry
                new_val = tot % 10
                carry = tot // 10
                l1 = l1.next
                l2 = l2.next
                new_node = ListNode(new_val)
                if(not sum_node):
                    sum_node = new_node
                    start_sum = sum_node
                else:
                    sum_node.next = new_node
                    sum_node = sum_node.next
            while(l1):
                tot = l1.val + carry
                new_val = tot % 10
                carry = tot // 10
                l1 = l1.next
                new_node = ListNode(new_val)
                sum_node.next = new_node
                sum_node = sum_node.next
            while(l2):
                tot = l2.val + carry
                new_val = tot % 10
                carry = tot // 10
                l2 = l2.next
                new_node = ListNode(new_val)
                sum_node.next = new_node
                sum_node = sum_node.next
            if(carry > 0):
                new_node = ListNode(carry)
                sum_node.next = new_node
                sum_node = sum_node.next
            return start_sum