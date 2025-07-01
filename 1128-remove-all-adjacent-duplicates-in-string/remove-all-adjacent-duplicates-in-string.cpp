class Solution {
public:
    string removeDuplicates(string s) {
        string ans ="";
        int len = s.length();
        for(int i = 0; i<len; i++){
            char Currentchar = s[i];
            if(ans.empty() || Currentchar != ans.back()){
                ans.push_back(Currentchar);
            }
            else if (Currentchar == ans.back()){
                ans.pop_back();
            }
        }
        return ans;
        
    }
};