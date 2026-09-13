class Solution {
public:

    int helper(vector<int>& nums,int start,int end){
        int n=nums.size();

        int prev1=nums[start];
        int prev2=max(nums[start],nums[start+1]);
        int res=prev2;

        for(int i=start+2;i<=end;i++){
            res=max(prev2,prev1+nums[i]);
            prev1=prev2;
            prev2=res;
        }
        return res;
    }

    int rob(vector<int>& nums) {

        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        return max(helper(nums,0,n-2),helper(nums,1,n-1));

        
    }
};
