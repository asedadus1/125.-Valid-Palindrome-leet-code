class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;   // Initialize the pointers `l` and `r` to the beginning and end of the string, respectively.
        while(l<r)
        {
            if(!isalnum(s[l]))                // If the character at `l` is not alphanumeric, increment `l`.
                l++;
            else if(!isalnum(s[r]))           // If the character at `r` is not alphanumeric, decrement `r`.
                r--;
            else if(tolower(s[l])!=tolower(s[r]))                // If the characters at `l` and `r` are not equal, ignoring case, return `false`.
                return false;
            else               // If the characters at `l` and `r` are equal, increment `l` and decrement `r`.
            {
                l++;
                r--;
            }
        }
        return true;        // If the pointers `l` and `r` meet or cross each other, return `true`.
    }
};
