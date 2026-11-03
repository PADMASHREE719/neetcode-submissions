class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256,-1);
        int n=s.length();
        int l=0,r=0;
        int maxLen=0;

        while(r<n){
            if(freq[s[r]] != -1){
                if(freq[s[r]] >= l){
                    l=freq[s[r]]+1;
                }
            }
            freq[s[r]]=r;
            maxLen=max(maxLen,(r-l+1));
            r++;
        }
        return maxLen;
        
    }
};
