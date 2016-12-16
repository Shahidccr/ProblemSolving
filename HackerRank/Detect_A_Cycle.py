"""
Detect a cycle in a linked list. Note that the head pointer may be 'None' if the list is empty.

A Node is defined as: 
 
    class Node(object):
        def __init__(self, data = None, next_node = None):
            self.data = data
            self.next = next_node
"""


def has_cycle(head):
    has_cycle = False
    nodes_data = {}
    
    while head.next:
        if head.data in nodes_data:
            has_cycle = True
            break
        nodes_data[head.data] = 1
        head = head.next
        
    return has_cycle;
    

