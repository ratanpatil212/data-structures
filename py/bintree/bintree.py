class Node(object):

    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


class Binarytree(object):

    def __init__(self, root):
        self.root = Node(root)

    def print_tree(self, traversal_type):
        if traversal_type == "preorder":
            return self.preorder_print(tree.root, "")
        else:
            print("Traversal type " + str(traversal_type) + " not supported")
            return False

    def preorder_print(self, start, traversal):
        if start:
            traversal += (str(start.value) + "-")
            traversal = self.preorder_traversal(start.left, traversal)
            traversal = self.preorder_traversal(start.right, traversal)

        return traversal


tree = Binarytree(1)

tree.root.left = Node(2)
tree.root.right = Node(3)

tree.root.left.left = Node(4)
tree.root.left.right = Node(5)

tree.root.right.left = Node(6)
tree.root.right.right = Node(7)


def preorder(self, Node):
    print(Node.root)


print(tree.print_tree("preorder"))