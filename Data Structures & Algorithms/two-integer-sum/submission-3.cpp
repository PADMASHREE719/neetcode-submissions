class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        for(int i =0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }

        sort(arr.begin(),arr.end());

        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(arr[i].first+arr[j].first == target){
                if(arr[i].second > arr[j].second){
                    return {arr[j].second,arr[i].second};
                }

                else{
                    return {arr[i].second,arr[j].second};
                }

                
            }
            else if(arr[i].first+arr[j].first<target){
                i++;
            }
            else{
                j--;
            }
        }
        return {-1,-1};
    }
};
