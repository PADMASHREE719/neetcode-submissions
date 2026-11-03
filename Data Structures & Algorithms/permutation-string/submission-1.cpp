class Solution {
public:

    bool isSame(vector<int> freq,vector<int>winfreq){
        for(int i=0;i<freq.size();i++){
            if(freq[i]!=winfreq[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        vector<int> freq(26,0);
        for(int i=0;i<n;i++){
            freq[s1[i]-'a']++;
        }

        int winSize=n;

        for(int i=0;i<s2.length();i++){
            int winIdx=0;
            int idx=i;
            vector<int> winfreq(26,0);

            while(winIdx<winSize && idx<s2.length()){
                winfreq[s2[idx]-'a']++;
                winIdx++,idx++;
            }

            if(isSame(freq,winfreq)){
                return true;
            }
        }
        return false;
    }
};
