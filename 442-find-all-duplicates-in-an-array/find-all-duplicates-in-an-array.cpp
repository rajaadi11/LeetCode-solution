class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans(0);
        unordered_map<int,int>mp;
        for(int i = 0; i<nums.size(); i++){
            int num = nums[i];
            mp[num] += 1;
        }
        for(auto it: mp){
            int key = it.first;
            int freq = it.second;
            if(freq == 2){
                ans.push_back(key);
            }
        }
        return ans;
    }
};