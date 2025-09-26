class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>fmp;
        for(int i = 0; i<nums.size(); i++){
            int num = nums[i];
            fmp[num] += 1;
        }
        int ans;
        for(auto it : fmp){
            int key = it.first;
            int freq = it.second;
            if(freq == 1){
                ans = key;
                break;
            }
        }
        return ans;
    }
};