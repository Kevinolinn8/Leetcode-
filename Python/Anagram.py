"""
Given two strings s and t , write a function to determine if t is an anagram of s.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

"""


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        s = s.replace(' ', '').lower() # remove spaces and lower
        t = t.replace(' ', '').lower() #remove spaces and lower
        
        #make dictionary for counting times a letter is seen
        count = {}
        
        for letter in s:
            if letter in count:
                count[letter] += 1 #increment if letter in count
            else:
                count[letter] = 1 #set to one if not in
                
        for letter in t:
             if letter in count:
                count[letter] -= 1 #decrement if letter in count
             else:
                count[letter] = 1 #set to one if not in 
                
        for k in count:
            if count[k] != 0:
                return False
            
        return True