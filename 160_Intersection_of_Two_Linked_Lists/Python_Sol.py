class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        pA = headA
        pB = headB
        while pA != pB:
            pA = headB if pA is None else pA.next
            pB = headA if pB is None else pB.next
        return pA
        '''
        Approach 2:
        
        set_B = set()
        curr_B = headB
        while(curr_B):
            set_B.add(curr_B)
            curr_B = curr_B.next
        curr_A = headA
        while(curr_A):
            if(curr_A in set_B):
                return curr_A
            curr_A = curr_A.next
        return None
        '''
       
        
