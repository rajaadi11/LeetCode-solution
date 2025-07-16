class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int maxLen = 0;

        for (int center = 0; center < s.length(); center++) {
            // Odd length palindrome
            int i = center, j = center;
            while (i >= 0 && j < s.length() && s[i] == s[j]) {
                int len = j - i + 1;
                if (len > maxLen) {
                    maxLen = len;
                    ans = s.substr(i, len);
                }
                i--;
                j++;
            }

            // Even length palindrome
            i = center;
            j = center + 1;
            while (i >= 0 && j < s.length() && s[i] == s[j]) {
                int len = j - i + 1;
                if (len > maxLen) {
                    maxLen = len;
                    ans = s.substr(i, len);
                }
                i--;
                j++;
            }
        }
        return ans;
    }
};
