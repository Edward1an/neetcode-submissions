class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> m;
        for(const auto & str : strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            m[temp].push_back(str);
        }
        for(const auto & p : m){
            res.push_back(p.second);
        }
        return res;
    }
};
