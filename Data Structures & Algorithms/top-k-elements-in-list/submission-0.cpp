class Solution {
public:
    vector<int> topKFrequent( vector<int>& nums, int k) {
        unordered_map<int, int> mp{};
        for(const auto num : nums){
            mp[num]++;
        }
        vector<vector<int>> arr(nums.size()+1);
        for(const auto & [key, value] : mp){
            arr[value].push_back(key);
        }
        vector<int> result;
        for(auto i{arr.size()};i-->0;){
            if(!arr[i].empty()){
                for(const auto num : arr[i]){
                    if(k-->0){
                        result.push_back(num);
                    } else return result;
                }
            }
        }
        return result;
    }
};
