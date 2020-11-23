import sys

class Solution:
    checker = []
    def pushCharacter(self,v):
        self.checker.append(v)
    def enqueueCharacter(self,v):
        self.checker.insert(0,v)
    def popCharacter(self):
        self.checker.pop()
    def dequeueCharacter(self):
        self.checker.pop(0)
    def checkList(self):
        print(self.checker)

# read the string s
s='yes'
#Create the Solution class object
obj=Solution()   

l=len(s)
# push/enqueue all the characters of string s to stack
for i in range(l):
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])
    
isPalindrome=True
'''
pop the top character from stack
dequeue the first character from queue
compare both the characters
''' 
for i in range(l // 2):
    if obj.popCharacter()!=obj.dequeueCharacter():
        isPalindrome=False
        break
#finally print whether string s is palindrome or not.
if isPalindrome:
    print("The word, "+s+", is a palindrome.")
else:
    print("The word, "+s+", is not a palindrome.")    

obj.checkList()