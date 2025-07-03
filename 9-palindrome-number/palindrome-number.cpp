class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        long long  a = x, b , rev = 0 ;
        while(a!=0){
        b = a%10;
        rev = rev *10 + b;
        a= a/10;
        }
        
        return rev == x;
    }
};