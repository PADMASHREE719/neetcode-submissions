class Solution {
public:

    bool isSame(vector<int> freq1,vector<int> freq2){
        for(int i=0;i<26;i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {

        vector<int> freq(26,0);
        for(int i =0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }

        int winSize=s1.length();

        for(int i=0;i<s2.length();i++){

            int winIdx = 0;
            int idx = i;
            vector<int> winFreq(26,0);

            while(winIdx<winSize && idx<s2.length()){
                winFreq[s2[idx]-'a']++;
                idx++,winIdx++;
            }

            if(isSame(freq,winFreq)){
                return true;
            }

        }
        return false;
        
    }
};
