class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n<3)
        return 0;
        int count = 0;
        for(int i=n-1; i>1; i--){
            int s = 0;
            int e = i-1;
            while(s<e){
                if(nums[s]+nums[e]>nums[i]){
                    count += e-s;
                    e--;
                }
                else{
                    s++;
                }
            }
        }
        return count;
    }
};