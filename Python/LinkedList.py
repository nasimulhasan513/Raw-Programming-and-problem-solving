# Create Node
# Create Linked List
# Add nodes to linked list
# print linked list out

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
class LinkedList:
    def __init__(self):
        self.head = None
    def insert(self,newNode):
        if self.head is None:
            self.head = newNode
            print(newNode.data)
            
        else:
            # head=> john->ben >none
            lastNode = self.head
            while True:
                if lastNode.next is None:
                    break
                lastNode = lastNode.next

            lastNode.next = newNode
    def printList(self):
         
        if self.head is None:
            print('List is empty')
        else:
            currentNode = self.head
            while True:
                if currentNode is None:
                    break
                # print(currentNode.data)
                currentNode = currentNode.next



# Node=> data,next
# firstNode.data => john, firstNode.next =>None
firstNode = Node("john")
linkedList = LinkedList()
linkedList.insert(firstNode)
secondNode = Node("Ben")
linkedList.insert(secondNode)
thirdNode = Node("brew")
# linkedList.insert(thirdNode)
linkedList.printList()