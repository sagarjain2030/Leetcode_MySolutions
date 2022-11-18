class Solution:
    def insert(self, head: 'Optional[Node]', insertVal: int) -> 'Node':
        new_node = Node(insertVal)
        if(not head):
            new_node.next = new_node
            return new_node
        prev,curr = head, head.next
        while(prev.next != head):
            if(prev.val <= new_node.val <= curr.val):
                break
            if((prev.val > curr.val) and (new_node.val > prev.val or new_node.val < curr.val)):
                break
            prev,curr = prev.next,curr.next

        new_node.next = curr
        prev.next = new_node
        return head