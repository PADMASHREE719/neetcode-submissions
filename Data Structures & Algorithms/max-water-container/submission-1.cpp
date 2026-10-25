class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=n-1;
        int area=INT_MIN;

        while(l<r){
            if(heights[l] < heights[r]){
                area=max(area,heights[l]*(r-l));
                l++;
            }
            else{
                area=max(area,heights[r]*(r-l));
                r--;
            }
        }
        return area;    
    }
};
