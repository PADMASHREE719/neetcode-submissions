class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        vector<vector<string>> ans;

        for(auto i : strs){
            string t = i;
            sort(t.begin(),t.end());
            mpp[t].push_back(i);
        }

        for(auto i:mpp){
            ans.push_back(i.second);
        }
        return ans;
        
    }
};
