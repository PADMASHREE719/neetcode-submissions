class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res;

        for(int i=0;i<=n-k;i++){
            int WinIdx=0;
            int idx=i;
            int maxEle=INT_MIN;

            while(WinIdx<k && idx<n){
                if(nums[idx]>maxEle){
                    maxEle=nums[idx];
                }
                WinIdx++;
                idx++;
            }
            res.push_back(maxEle);
        }

        return res;
        
    }
};
