class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int n=s.length();
        int j=n-1;

        while(i<=j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }

            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true; //O(N) and for why continue consider this example a,a
        
    }
};
