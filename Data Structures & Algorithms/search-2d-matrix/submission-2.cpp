class Solution {
public:

    bool search(vector<vector<int>>& matrix, int target,int midRow){
        int low=0;
        int n=matrix[0].size();
        int high=n-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(matrix[midRow][mid]==target){
                return true;
            }
            else if(matrix[midRow][mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
        
    }


    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size();
        int m=matrix.size();

        int startRow=0, endRow=m-1;

        while(startRow<=endRow){
            int midRow = startRow+(endRow-startRow)/2;

            if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
                return search(matrix,target,midRow);
            }
            else if(target > matrix[midRow][n-1]){
                startRow=midRow+1;
            }
            else{
                endRow=midRow-1;
            }
        }
        return false;
        
    }
};
