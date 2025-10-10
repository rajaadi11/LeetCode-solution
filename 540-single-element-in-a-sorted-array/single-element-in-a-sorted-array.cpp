class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid;

        while (s <= e) {
            mid = s + (e - s) / 2;

            // if single element found
            if (s == e) {
                return nums[s];
            }

            // single element check
            if ((mid - 1 >= 0 && nums[mid] != nums[mid - 1]) &&
                (mid + 1 < n && nums[mid] != nums[mid + 1])) {
                return nums[mid];
            }

            // handle left duplicate
            if (mid - 1 >= 0 && nums[mid] == nums[mid - 1]) {
                int firststartindx = mid - 1;

                // if left pair starts at odd index
                if (firststartindx % 2 == 1) {
                    e = firststartindx - 1;
                } else {
                    s = mid + 1;
                }
            }
            // handle right duplicate
            else if (mid + 1 < n && nums[mid] == nums[mid + 1]) {
                int firststartindx = mid;

                if (firststartindx % 2 == 1) {
                    e = firststartindx - 1;
                } else {
                    s = mid + 2;
                }
            }
        }
        return -1; 
    }
};
