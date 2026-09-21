class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]>temp.back()){
                temp.push_back(nums[i]);
            }
            else{
                int idx=lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin(); /*lower_bound finds the index of element which is equal to nums[i] or first greater element than nums[i]*/
                temp[idx]=nums[i]; //this approch just give the lenght of the longest lis not the lis.
            }
        }
        return temp.size();
        
    }
};
