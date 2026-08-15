class Solution {
public:
    vector<vector<string>> groupAnagrams(const vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(const auto & str : strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            m[temp].push_back(std::move(str));
        }
        vector<vector<string>> res;
        res.reserve(m.size());
        for(const auto & [key, value] : m){
            res.push_back(std::move(value));
        }
        return res;
    }
};
