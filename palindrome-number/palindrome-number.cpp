class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string check = str;
        reverse(check.begin(), check.end());
        if(check == str)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};