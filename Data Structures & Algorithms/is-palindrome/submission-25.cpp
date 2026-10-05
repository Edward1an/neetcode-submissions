class Solution {
public:
    static auto isPalindrome(string s) noexcept -> bool {
        auto left{0};
        auto right{s.size()-1};
        while(left<right){
            if(!isalnum(s[left])){
                ++left;
            } else if(!isalnum(s[right])){
                --right;
            } else if(tolower(s[left])==tolower(s[right])){
                ++left;
                --right;
            } else {
                return false;
            }
        }
        return true;
    }
};