#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> myVector; 
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                //myVector.push_back(nums[i]);
                //myVector.push_back(nums[j]);

                if(nums[i] + nums[j] == target){
                    myVector.push_back(i);
                    myVector.push_back(j);
                    return myVector; 
                }
            }
        }
        return  myVector;
        
    }
};
