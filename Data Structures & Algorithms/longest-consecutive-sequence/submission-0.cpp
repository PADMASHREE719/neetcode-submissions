class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int maxi=0;

        for(auto i : nums){
            st.insert(i);
        }

        for(auto i : st){
            if(st.find(i-1) == st.end()){
                int count = 1;
                int x =i;

                while(st.find(x+1) != st.end()){
                    count++;
                    x++;
                }

                maxi=max(maxi,count);

            }
        }
        return maxi;
        
    }
};
