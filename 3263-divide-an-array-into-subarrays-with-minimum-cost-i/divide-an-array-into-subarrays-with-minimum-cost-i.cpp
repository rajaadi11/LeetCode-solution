class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        
        // First subarray always starts at nums[0]
        int first = nums[0];
        
        // Find the two smallest elements from nums[1..n-1]
        int a = INT_MAX, b = INT_MAX;
        
        for (int i = 1; i < n; i++) {
            if (nums[i] < a) {
                b = a;
                a = nums[i];
            } else if (nums[i] < b) {
                b = nums[i];
            }
        }
        
        return first + a + b;
    }
};
