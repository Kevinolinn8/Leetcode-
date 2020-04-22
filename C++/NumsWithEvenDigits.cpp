/*
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.
*/


#include <sstream>
#include <string>

class Solution {
public:
    int findNumbers(vector<int>& nums) {
       
      string tmp;
      int count = 0;
      for( int i = 0; i < nums.size(); i++){
          tmp = to_string(nums.at(i));
          
          if(tmp.size() % 2 == 0)
              count++;
          
      }  
        
      return count;  
    }
};