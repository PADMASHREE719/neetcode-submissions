class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq;
        int n = nums.size();

        //first sliding window
        for(int i=0;i<k;i++){
            while(dq.size()>0 && nums[i] > nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        //for remaining windows
        for(int i=k;i<n;i++){
            res.push_back(nums[dq.front()]);

            while(dq.size()>0 && dq.front() <= i-k){
                dq.pop_front();
            }

            while(dq.size()>0 && nums[i] > nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        res.push_back(nums[dq.front()]);
        return res;
        
    }
};
