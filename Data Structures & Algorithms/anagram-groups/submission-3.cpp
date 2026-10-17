class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        vector<vector<string>> ans;

        for(auto i : strs){ //O(N)
            string t = i;
            sort(t.begin(),t.end());//O(KlogK) K length of string
            mpp[t].push_back(i);
        }

        for(auto i:mpp){
            ans.push_back(i.second);//O(N)
        }
        return ans; //O(N.KlogK)
        
    }
};
