class Solution {
public:
    static auto isPalindrome(const string& s) noexcept -> bool {
        auto left{0};
        auto right{ssize(s)-1};
        while(left<right){
            while(left < right && !isalnum(s[left])){
                ++left;
            } 
            while (left < right && !isalnum(s[right])){
                --right;
            }
            if(left < right && tolower(s[left])!=tolower(s[right])){
                return false;
            } 
            ++left, --right;
            
        }
        return true;
    }
};
