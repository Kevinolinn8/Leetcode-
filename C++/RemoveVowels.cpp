/*

Given a string S, remove the vowels 'a', 'e', 'i', 'o', and 'u' from it, and return the new string.

 

Example 1:

Input: "leetcodeisacommunityforcoders"
Output: "ltcdscmmntyfrcdrs"


*/


class Solution {
public:
    string removeVowels(string S) {
        
        string result = "";
        
        for(auto x: S){
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
                continue;
            
            }else{
                result += x;
            }
        }
        
        return result;
        
    }
};
