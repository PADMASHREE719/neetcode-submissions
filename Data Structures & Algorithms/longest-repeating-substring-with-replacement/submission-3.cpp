class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0;
        vector<int> freq(26,0);
        int maxfreq=INT_MIN;
        int maxLen=0;

        for(int i=0;i<s.length();i++){
            freq[s[i]-'A']++;
            maxfreq=max(maxfreq,freq[s[i]-'A']);

            if((r-l+1)-maxfreq>k){
                freq[s[l]-'A']--;
                l++;
            }

            maxLen=max(maxLen,(r-l+1));
            r++;
        }
        return maxLen;
        
    }
};
