/*

Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

 

Example 1:


Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10
Example 2:

Input: head = [0]
Output: 0
Example 3:

Input: head = [1]
Output: 1
Example 4:

Input: head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
Output: 18880
Example 5:

Input: head = [0,0]
Output: 0




*/





#include <sstream>
#include <string>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
     
        string binaryStr = "";
        
       ListNode * ptr = head;
        
        while(ptr != nullptr){
            int temp = 0;
            temp = ptr->val;
            binaryStr += to_string(temp);
            ptr = ptr->next;
            
        }
    
        string num = binaryStr; 
        int dec_value = 0; 
  
         // Initializing base value to 1, i.e 2^0 
        int base = 1; 
  
        int len = num.length(); 
        for (int i = len - 1; i >= 0; i--) { 
            if (num[i] == '1') 
            dec_value += base; 
            base = base * 2; 
    } 
  
        return dec_value; 
        
        
    }
};