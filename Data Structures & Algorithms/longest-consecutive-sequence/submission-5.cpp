class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int count=0;
        for(auto i:nums){
            st.insert(i);
        }
        for(auto i:st){
            if(st.find(i-1) == st.end()){
                int x=i;
                int cnt=1;

                while(st.find(x+1) != st.end()){
                    cnt++;
                    x++;
                }
                count=max(count,cnt);
            }
        }
        return count;
    }
};
