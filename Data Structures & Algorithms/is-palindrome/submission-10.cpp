class Solution {
public:
    static auto isPalindrome(string s) noexcept -> bool {
        int left = 0, right = s.size()-1;
        while(left<right){
            while(!isalnum(s[left])){
                ++left;
            } 
            while (!isalnum(s[right])){
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
