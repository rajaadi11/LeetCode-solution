class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str = "";
        int n = s.length();
        int maxi = 0;

        for(int i = 0; i < n; i++){
            char ch = s[i];

            if(str.find(ch) == string::npos){
                str.push_back(ch);
            }
            else{
                int pos = str.find(ch);
                str = str.substr(pos + 1);
                str.push_back(ch);
            }

            maxi = max(maxi, (int)str.length());
        }

        return maxi;
    }
};