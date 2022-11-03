# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if(not list1 and not list2):
            return None
        elif(not list1):
            return list2
        elif(not list2):
            return list1
        else:
            if(list1.val < list2.val):
                new_head = list1
                list1 = list1.next
            else:
                new_head = list2 
                list2 = list2.next
            merged_node = new_head
            while(list1 and list2):
                if(list1.val < list2.val):
                    new_head.next = list1
                    list1 = list1.next
                else:
                    new_head.next = list2
                    list2 = list2.next
                new_head = new_head.next
            if(list1):
                new_head.next = list1
            if(list2):
                new_head.next = list2
            return merged_node    