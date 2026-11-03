class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int maxfreq=0;
        int l=0,r=0;
        int n=s.length();
        int maxLen=0;

        for(int i=0;i<n;i++){
            freq[s[i]-'A']++;
            maxfreq=max(maxfreq,freq[s[i]-'A']);

            if((r-l+1)-maxfreq > k){
                freq[s[l]-'A']--;
                l++;
            }

            maxLen=max(maxLen,(r-l+1));
            r++;
        }       
        return maxLen; 
    }
};
