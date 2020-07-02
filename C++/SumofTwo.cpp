/*

Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.

Example 1:

Input: a = 1, b = 2
Output: 3

*/


#include <cmath>

class Solution {
public:
    int getSum(int a, int b) {
        
        return fma(1,a, b);
        
    }
};