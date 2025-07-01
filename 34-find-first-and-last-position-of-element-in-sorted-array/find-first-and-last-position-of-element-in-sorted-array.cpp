class Solution {
public:
void firstelementindex(vector<int> nums , int n , int target, int &ansIndex){
    int s = 0;
        int e = n-1;
        int mid = s+(e-s)/2;
        while( s<=e){
            if (nums[mid] == target ){
                ansIndex = mid;
                e = mid -1; 
            }
            if (target > nums[mid]){
                s = mid + 1;
            }
            if (target < nums[mid]){
                e = mid -1;
            }
            mid = s+(e-s)/2;
        }
        
    }


void  lastelementindx(vector<int> nums , int n , int target, int &ansIndex){
    int s = 0;
        int e = n-1;
        int mid = s+(e-s)/2;
        while( s<=e){
            if (nums[mid] == target ){
                ansIndex = mid;
                s = mid +1 ;
            }
            if (target > nums[mid]){
                s = mid + 1;
            }
            if(target<nums[mid]){
                e = mid -1;
            }
            mid = s+(e-s)/2;
        }
        

}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int firstindex = -1;
        firstelementindex(nums , n, target, firstindex);

        int lastindex = -1;
        lastelementindx(nums, n , target, lastindex);

        vector<int> temp(2);
        temp[0]=firstindex;
        temp[1]=lastindex;
        return temp;

        }
     
};