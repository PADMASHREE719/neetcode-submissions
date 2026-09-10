class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> st;
        for(auto i:nums){
            if(st.find(i)!=st.end()){
                return i;
            }
            st.insert(i);
        }
        return -1;
        
    }
};
