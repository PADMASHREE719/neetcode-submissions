class Solution {
public:

    int findMax(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }

    int calculatehrs(vector<int>&piles,int mid){
        int tothrs=0;
        for(int i=0;i<piles.size();i++){
            tothrs+=ceil((double)piles[i]/(double)mid);
        }
        return tothrs;

    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=findMax(piles);
        int ans=INT_MAX;

        while(low<=high){
            int mid = low+(high-low)/2;

            int totalhrs=calculatehrs(piles,mid);

            if(totalhrs<=h){
                ans=min(ans,mid);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};
