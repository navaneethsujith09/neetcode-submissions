#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vals;
        vector<vector<string>> finals;
        vector<string> strings = strs;
        vector<string> words;
        vector<string> finalse;

        for(int i = 0; i < strs.size(); i++){
            sort(strings[i].begin(), strings[i].end());
            bool placeFound = true;
            for(int j = 0; j < vals.size(); j++ ){
                if(vals[j][0] == strings[i]){
                    vals[j].push_back(strings[i]);
                    finals[j].push_back(strs[i]);
                    placeFound = false;
                }
            }
            if(placeFound){
                words.push_back(strings[i]);
                vals.push_back(words);
                finalse.push_back(strs[i]);
                finals.push_back(finalse);
                finalse.clear();
                words.clear();
            }

           
        }
        
        return finals;
        
    }
};