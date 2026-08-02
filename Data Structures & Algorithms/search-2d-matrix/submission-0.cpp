class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ro=matrix.size(),co=matrix[0].size();
        int l=0,r=ro*co-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int row = mid / co;
            int col = mid % co;
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return false;
    }
};
