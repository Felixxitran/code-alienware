class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key
 
 
# A function to do inorder tree traversal
def printInorder(root):
    if root:
        
        # First recur on left child
        printInorder(root.left)
 
        # then print the data of node
        print(root.val),
 
        # now recur on right child
        printInorder(root.right)
def preOrder(root):
    if root: 
        print(root.val)
        preOrder(root.left)
        preOrder(root.right)  
def iterativeInorder(root):
    res = []
    stack = []
    cur = root 
    while cur or stack:
        while cur: 
            stack.append(cur)
            cur = cur.left 
        cur = stack.pop()
        res.append(cur.val)
        cur = cur.right 
    print(res)

def iterativePostOrder(root):
    res = []
    stack = []
    cur = root 
    while cur or stack: 
        while cur: 
            stack.append(cur)
            cur = cur.left
        cur = stack.pop()
        if cur.right:
            cur = cur.right
        res.append(cur)


    

# Driver code
if __name__ == "__main__":
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
 
    # Function call
    print("\n traversal of binary tree is")
    iterativeInorder(root)