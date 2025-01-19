 def isPalindrome(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: bool
        """
        theList = []
        while head.next != None:
            theList.append(head.val)
            head = head.next

        for i in range[:(len(theList)/2) -1 ]:
            if theList[i] != theList[ len(theList) - i ] :
                return False
        return True 