# Nodes

class LinkedListNode:
    def __init__(self, value, next=None):
        self.value = value
        self.next = next


# "3"->"4"->"5"

node1 = LinkedListNode(3)
node2 = LinkedListNode(4)
node3 = LinkedListNode(5)

node1.next = node2
node2.next = node3

currentNode = node1

while True:
    print(currentNode.value, "->", end=" ")
    if currentNode.next is None:
        print("None")
        break
    currentNode = currentNode.next
