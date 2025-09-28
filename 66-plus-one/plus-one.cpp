class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();
        int l = n-1;
        int carry = 1;
        while(l>=0 || carry > 0){
            int sum = carry;
            if(l >= 0){
                sum += digits[l];
            }
            int digit = sum %10;
            ans.push_back(digit);
            carry = sum /10;
            l--;
        }

        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};