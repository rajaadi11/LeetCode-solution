class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid = s +(e-s)/ 2;

        while(s<=e){

            if(s==e){
                return nums[s];
            }

            int currval = nums[mid];
            int leftval = -1; // val at mid-1
            if(mid-1 >=0){
                leftval = nums[mid-1];
            }
            int rightval = -1; //val at mid+1.
            if(mid+1<n){
                rightval = nums[mid+1];
            }



            //dublicate dose not exists.
            if(currval != leftval && currval != rightval){
                return currval;
            }
            //dublicate exists on left index.
            if(currval == leftval && currval != rightval){
                int firststartindx = mid-1;
                if(firststartindx & 1){
                    e = mid -1;
                }
                else{
                    s = mid+1;
                }

            }
            //dublicate exists on right index.
            else if(currval != leftval && currval == rightval){
                int firststartindx = mid;
                if(firststartindx & 1){
                    e = mid -1;
                }
                else{
                    s = mid+1;
                }

            }
            mid =s + (e-s)/ 2;
        }
    return -1;
        
    }
};