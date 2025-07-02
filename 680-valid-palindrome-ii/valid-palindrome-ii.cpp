class Solution {
public:
    bool checkpalindrome(string str , int s , int e){
        while(s<e){
            if(str[s]==str[e]){
                s++;
                e--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int len = s.length();
        int i = 0;
        int j = len-1;
        while(i<j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else {
                bool ansone = checkpalindrome(s,i,j-1);
                bool anstwo = checkpalindrome(s,i+1,j);
                bool finalans = ansone || anstwo ;
                return finalans;
            }
        }
        return true;
        
    }
};