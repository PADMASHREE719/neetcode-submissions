class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st; //insert nd find O(1)

        for(auto i:nums){ //O(N)
            if(st.find(i) != st.end()){
                return true;
            }
            st.insert(i);
        }
        return false;
        
    }
};