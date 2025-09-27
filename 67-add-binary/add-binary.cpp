class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string ans = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        
        while (i >= 0 && j >= 0) {
            int sum = carry + (a[i] - '0') + (b[j] - '0');
            int digit = sum % 2;
            ans.push_back(digit + '0');
            carry = sum / 2;
            i-- , j--;
        }

        while (i >= 0) {
            int sum = carry + (a[i] - '0');
            int digit = sum % 2;
            ans.push_back(digit + '0');
            carry = sum / 2;
            i--;
        }

        while (j >= 0) {
            int sum = carry + (b[j] - '0');
            int digit = sum % 2;
            ans.push_back(digit + '0');
            carry = sum / 2;
            j--;
        }

        if (carry) {
            ans.push_back(carry + '0');
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
