using namespace std;
#include <iostream>;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int num = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums.at(i) == nums.at(j)){
                    num += 1;
                }
            }
             if(num > 1){
                return true;
            } 
            num = 0;
        }
        std::cout << num;
       
        return false;
    }
};