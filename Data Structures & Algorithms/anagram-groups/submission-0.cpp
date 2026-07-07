class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        vector<vector<string>> res;

        for(auto s : strs){
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
