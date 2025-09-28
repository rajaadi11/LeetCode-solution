class Solution {
public:
// tow pontier approach.TC O(1)
    int trap(vector<int>& ht){
        int n = ht.size();
        int l = 0, r = n-1;
        int ans = 0;
        int lmax = 0, rmax = 0;

        while(l<r){
            lmax = max(lmax, ht[l]);
            rmax = max(rmax, ht[r]);

            if(lmax < rmax){
                ans += lmax - ht[l];
                l++;
            }
            else{
                ans += rmax - ht[r];
                r--;
            }
            
        }
        return ans;
    }
    
//time complx O(n) 
    // int trap(vector<int>& ht) {
    //     int n = ht.size();
    //     vector<int>lmax(n,0);
    //     vector<int>rmax(n,0);
    //     lmax[0] = ht[0];
    //     rmax[n-1] = ht[n-1];
    //     for(int i = 1; i<n; i++){
    //         lmax[i] = max(lmax[i-1],ht[i]);
    //     }

    //     for(int i = n-2; i>=0; i--){
    //         rmax[i] = max(rmax[i+1],ht[i]);
    //     }
    //     int ans = 0;
    //     for(int i = 0; i<n; i++){
    //         ans += min(lmax[i],rmax[i]) - ht[i];

    //     }
    //     return ans;
        
    // }
};