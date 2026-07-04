#include <stack>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 1) return false;
        stack<char> word;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                word.push(s[i]);
            }
            if(s[i] == ')'){
                if(word.empty()) return false;
                if(word.top() == '('){
                    word.pop();
                } else{
                    return false;
                }
               
            }
            if(s[i] == '}'){
                if(word.empty()) return false;
                 if(word.top() == '{'){
                    word.pop();
                } else{
                    return false;
                }
            }
            if(s[i] == ']'){
                if(word.empty()) return false;
                if(word.top() == '['){
                    word.pop();
                } else{
                    return false;
                }
            }
        }
        if(word.empty()){
            return true;
        } else{
            return false;
        }
    }
};
