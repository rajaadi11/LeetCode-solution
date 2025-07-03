class Solution {
public:
    void reverseString(vector<char>& s) {
        int x = 0;
        int len = s.size();
        int e = len-1;
        while(x<e){
            swap(s[x],s[e]);
            x++;
            e--;
        }
        
    }
};