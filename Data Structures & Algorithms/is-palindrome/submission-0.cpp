#include <algorithm>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        


        string word1 = "";
        string word2 = "";
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){word1 += tolower(s[i]);}
            
        }
        for(int j = s.size()-1; j >= 0; j--){
            if(isalnum(s[j])){word2 += tolower(s[j]);}

        }
        return word1 == word2;
    }
};
