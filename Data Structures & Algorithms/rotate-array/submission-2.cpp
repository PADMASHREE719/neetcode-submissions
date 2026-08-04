class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int index=0;
        int n=nums.size();
        vector<int> res(n);
        //
        k=k%n;

        for(int i=n-k;i<n;i++){
            res[index]=nums[i];
            index++;
        }

        for(int i=0;i<n-k;i++){
            res[index]=nums[i];
            index++;
        }

        for(int i=0;i<n;i++){
            nums[i]=res[i];
        }
        
    }
};