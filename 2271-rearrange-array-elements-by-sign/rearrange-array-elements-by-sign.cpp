class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> B_arr(n) ;
        int p_index = 0;
        int n_index = 1;
        for(int i = 0; i<n; i++){
            
            if(nums[i]>0){
            B_arr[p_index] = nums[i];
                p_index += 2;
            }
            else{
                B_arr[n_index] =  nums[i] ;
                n_index += 2; 
            }
        }
        return B_arr;
    }
};