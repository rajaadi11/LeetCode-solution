class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>lsum(nums.size(),0);
        vector<int>rsum(nums.size(),0);
        int n = nums.size();
        //left sum
        for( int i = 1; i<n;i++){
            lsum[i] = lsum[i-1]+nums[i-1];
        }
        //right sum
        for(int i = n-2; i>=0;i--){
            rsum[i] = rsum[i+1]+nums[i+1];
        }

        for(int i =0 ; i<n; i++){
            if(lsum[i]==rsum[i]) return i;
        }

      return -1;  
    }
};