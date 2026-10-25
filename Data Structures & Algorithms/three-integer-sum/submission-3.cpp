class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end()); // [-4,-1,-1,0,1,2] O(NlogN)

        for(int i=0;i<n;i++){ //O(N)

            if(i>0 && nums[i]==nums[i-1]){ // no need to check in 3rd index as will get repeated value
                continue;
            }
            int j=i+1,k=n-1;

            while(j<k){ //O(N)
                int sum=nums[i]+nums[j]+nums[k];

                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;

                    while(j<k && nums[j]==nums[j-1]){ //consider an example -1,-1,0,0,1 suppose i is at -1 will get duplicate ans as there r 2 zeros -1 0 1 and -1 0 1
                        j++;
                    }
                }

            }
            
        }
        return ans; //O(NlogN) + O(N * N) = O(N**2)
    }
};
