"""
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21


Note:
Assume we are dealing with an environment which could only store integers
within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose
of this problem, assume that your function returns 0 when the reversed integer overflows.

"""


class Solution:
    def reverse(self, x: int) -> int:
        
        my_num = str(x)
        
        if my_num[0] == '-':
            my_num = '-' + my_num[:0:-1]
            
        else:
            my_num = my_num[::-1]
        
        
        
        if int(my_num) > 2**31 or int(my_num) < -2**31:
            return 0
        
        return int(my_num)