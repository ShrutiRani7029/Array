class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
      
        for (int i = n - 1; i >= 0;) {
            if (s[i] == ' ')
                i--;
            else if (s[i] != ' ') {
                if (i == 0 || s[i - 1] == ' ')
                    break;
                count++;
                i--;
            }
        }
        return count+1;
    }
};
