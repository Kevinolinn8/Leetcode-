"""
Given a string, find the first non-repeating character in it and return its index.
 If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode"
return 2.

"""

class Solution:
    def firstUniqChar(self, s: str) -> int:
        
        my_dict = {}
    
        for x in s:
            if x in my_dict:
                my_dict[x] += 1
            else:
                my_dict[x] = 1
                
        for x, y in my_dict.items():
            if y == 1:
                return (s.index(x))
                
        return -1