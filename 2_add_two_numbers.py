#2.Add two numbers
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def __init__(self):
        self.num1 = 0
        self.ll = ListNode(None,None)
    
    def insertFirst(self,newN):
        if self.ll.val == None :
            self.ll = newN
        else:
            newN.next = self.ll
            self.ll = newN
        return self.ll
    def reverse1(self,l1):
        if(l1.next != None):
            self.reverse1(l1.next)
        self.num1 = self.num1 * 10 + l1.val
        return self.num1
    
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        if(l1 == None and l2 != None):
            return l2
        elif(l1 != None and l2 == None):
            return l1
        elif(l1 == None and l2 == None):
            return l1
        
        l1 = self.reverse1(l1)
        self.num1 = 0
        l2 = self.reverse1(l2)
        
        tt = l1 + l2
        tt = [int(x) for x in str(tt)] 
        i = 0
        while(i != len(tt)):
            newNode = ListNode(tt[i])
            self.ll = self.insertFirst(newNode)
            i += 1
        return self.ll
