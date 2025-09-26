class Solution {
public:
    void sortColors(vector<int>& nums) {
// 2nd method
        int l = 0, m =0 , h = nums.size()-1;
        while(m<=h){
            if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++,m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[h],nums[m]);
                h--;
            }
        } 
        



// 1st method
    //     // int a = INT_MAX;
    //     int n= nums.size();
    //     for(int i = 0; i<n; i++){
    //         for(int j=i+1; j<n; j++){
    //         if(nums[i] > nums[j])
    //         swap(nums[i],nums[j]);
    //         // break;

    //     }
    // }
    //     for(int i = 0; i<n; i++)
    //     cout<<nums[i]<<" ";
    }

};