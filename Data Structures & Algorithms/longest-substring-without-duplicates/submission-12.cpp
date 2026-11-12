class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int n=s.length();
        vector<int> hash(256,-1);
        int maxLen=0;

        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1; //"abba"
                }
                
            }
            hash[s[r]]=r;
            maxLen=max(maxLen,(r-l+1));
            r++;
        }
        return maxLen;
    }
};
