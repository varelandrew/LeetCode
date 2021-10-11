class Solution {
public:
    bool checkValidString(string s) {
        int countLeft = 0;
        int countRight = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                countLeft++;
                countRight++;
            }
            else if(s[i] == ')')
            {
                countLeft--;
                countRight--;
            }
            else if(s[i] == '*')
            {
                countLeft++;
                countRight--;
            }
            if(countLeft < 0)
            {
                return false;
            }
            countRight = max(countRight, 0);
        }
        return countRight == 0;
    }
};