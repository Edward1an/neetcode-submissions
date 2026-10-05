class Solution {
public:
    static auto isPalindrome(string s) noexcept -> bool {
        auto left{0};
        int right = s.size()-1;
        while(left<right){
            while(left<right &&!isalnum(s[left])){
                ++left;
            } 
            while (left<right &&!isalnum(s[right])){
                --right;
            }
            if(left < right && tolower(s[left])!=tolower(s[right])){
                cout << right << endl;
                return false;
            } 
            ++left;
            --right;
            
        }
        return true;
    }
};