class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int sum = 0;
        int maxsum = arr[0];
        for(int i = 0; i<arr.size(); i++){
            sum += arr[i];
            maxsum = max(maxsum, sum);
            if(sum < 0 ){
                sum = 0;
            }
        }
        return maxsum;
        
    }
};