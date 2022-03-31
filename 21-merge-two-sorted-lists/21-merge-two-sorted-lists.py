# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        # Inplace Algo.
        if not list1: return list2
        if not list2: return list1
		
		# Compare the values of list1 amd list2 and pointing list1 to the smaller value
		# vice versa can be done
		
        if list1.val > list2.val:
            list1, list2 = list2, list1
            
		# creating the res Node which points to the smaller list 
		
        res = ListNode(-1)
        res.next = list1
        
		# taking one pointer(temp) which always points to the prev. node of smaller list
		# where condition fails
        while list1 and list2:
			# (IMP) run loop till list1 value is less than list2 value
			# and update the temp pointer accordingly
            while list1 and list1.val <= list2.val:
                temp = list1
                list1 = list1.next
            temp.next = list2
			# update the list1 and list2 bcz list1 should always point to smaller value 
            list1, list2 = list2, list1
        return res.next