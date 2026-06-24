#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int i: nums){
            freq[i]++;
        }
        vector<pair<int, int>> v(freq.begin(), freq.end());
        sort(v.begin(), v.end(),
        [](auto& a, auto& b)
        {
            return a.second > b.second;
        });
        for(int i = 0; i < k; i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
