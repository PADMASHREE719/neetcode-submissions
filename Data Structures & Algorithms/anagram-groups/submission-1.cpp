class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> mpp;

        for(auto s:strs){
            string temp = s;
            sort(s.begin(),s.end());
            mpp[s].push_back(temp);
        }

        for(auto i : mpp){
            res.push_back(i.second);
        }
        return res;
    }
};
