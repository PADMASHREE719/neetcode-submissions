class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0){
            return;
        }
        k=k%n;
        vector<int> arr(n);
        int index=0;
        for(int i=n-k;i<n;i++){
            arr[index]=nums[i];
            index++;
        }
        for(int i=0;i<n-k;i++){
            arr[index]=nums[i];
            index++;
        }

        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
    }
};