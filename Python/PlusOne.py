"""
Given a non-empty array of digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.

"""

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        
        my_str = ""
        my_list = []
        
        for x in digits:
            my_str += str(x)
            
        my_str = int(my_str) + 1
        my_str = str(my_str)
        
        for y in my_str:
            my_list.append(int(y))
            
        digits = my_list
        
        return digits