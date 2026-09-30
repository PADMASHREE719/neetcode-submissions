class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int count=0,sum=0,res;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            res=sum-k;
            if(mpp.find(res) != mpp.end()){
                count+=mpp[res];
            }
            mpp[sum]++;
        }
        return count;
        
    }
};