class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0 , j = k-1 ;
        int sum = 0;
        for(int y=i; y<=j; y++){
            sum += nums[y];
        }
        int maxsum = sum ;
        j++;
        while(j<n){
            sum -= nums[i++];
            sum += nums[j++];
            maxsum = max(maxsum,sum);
        }
        double ans = maxsum / (double)k;
        return ans;
        
    }
};