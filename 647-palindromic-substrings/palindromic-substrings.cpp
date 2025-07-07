class Solution {
public:
    int expandaroundcenter(string s , int i , int j){
        int count = 0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalcount = 0;
        for(int center = 0 ; center<s.length(); center++ ){
            // odd part
            int i = center;
            int j = center;
            int oddpalsubstringcount = expandaroundcenter(s,i,j);
            // even part
            i = center;
            j = center+1;
            int evenpalsubstringcount = expandaroundcenter(s,i,j);
            totalcount += oddpalsubstringcount + evenpalsubstringcount; 
        } 
        return totalcount;
    }
};