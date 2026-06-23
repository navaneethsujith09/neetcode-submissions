#include <vector>
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int> myNumbers;
        for(int i = 0; i < nums.size()*2; i++){
            myNumbers.push_back(nums.at(i%nums.size()));
        }
        return myNumbers;
    }
};