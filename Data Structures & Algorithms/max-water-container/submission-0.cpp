class Solution {
public:
    int maxArea(vector<int>& height) {
        int l =0;
        int n =height.size();
        int r = n-1;
        int maxWater = 0;
        int lmax = 0;
        int rmax = 0;

        while(l<r){
            int ans=0;
            if(height[l] < height[r]){
                ans = ((r-l)*height[l]);
                l++;
            }
            else{
                ans = ((r-l)*height[r]);
                r--;
            }

            maxWater = max(maxWater,ans);
            

        }
        return maxWater;
        
    }
};