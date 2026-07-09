class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int n = s.length();
        int hash[256];
        int maxLen = 0;

        for(int i=0;i<256;i++){
            hash[i]=-1;
        }
         
        while(r<n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l){
                    l = hash[s[r]]+1;
                }
            }
            hash[s[r]] = r;

            maxLen = max(maxLen,(r-l)+1);
            r++;

        }
        return maxLen;
    }
};
