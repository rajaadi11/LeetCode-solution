class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int nrows = matrix.size();
        int ncols = matrix[0].size();
        // step 1 find transpose.
        for(int i = 0 ; i<nrows ; i++){
            for(int j =i ; j< ncols; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // step 2 take reverse row wise.
        for(int i = 0 ; i<nrows; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};