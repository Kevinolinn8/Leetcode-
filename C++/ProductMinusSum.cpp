/*


Given an integer number n, return the difference between the product of 
its digits and the sum of its digits.
 

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 


*/


#include <string>
#include <sstream> 

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        string num = to_string(n);
        int plus = 0;
        int mult = 1;
        string tmp;
        
        for( int i = 0; i < num.length(); i++){
            tmp = num.at(i);
            plus += stoi(tmp);
            mult *= stoi(tmp);
        }
        
        return mult - plus;
        
    }
};