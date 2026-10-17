class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char,int> mpp;

        for(int i=0;i<s.length();i++){ //O(N)
            mpp[s[i]]++;
            mpp[t[i]]--;
        }

        for(auto i:mpp){ //O(K)
            if(i.second != 0){
                return false;
            }
        }//O(N+K) ~ O(N)
        
        return true;
    }
};
