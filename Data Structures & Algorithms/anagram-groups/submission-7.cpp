class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res{};
        unordered_map<string, vector<string>> m{};
        array<int, 123> arr{};
        for(const auto & str : strs){
            for(const auto chr : str){
                arr[chr]++;
            }
            string temp;
            for(auto i{97};i<123;i++){
                if(arr[i]>0){
                    temp += to_string(i) + ":" + to_string(arr[i]) + ",";
                    arr[i]=0;
                }
            }
            m[temp].push_back(str);
        }
        for(const auto & p : m){
            res.push_back(p.second);
        }
        return res;
    }
};
