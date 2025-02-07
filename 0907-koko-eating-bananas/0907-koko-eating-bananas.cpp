class Solution {
public:

    int maxi(vector <int> piles){
        int n=piles.size(),Maxi=piles[0];
        for(int i=1;i<n;i++){
            if(piles[i]>Maxi){
                Maxi=piles[i];
            }
        }
        return Maxi;
    }
    long long calHours(vector <int> piles , int hours){
        long long total=0;
        for(int i=0;i<piles.size();i++){
            total=total + ceil(double(piles[i])/ double(hours));
        }
        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low=1,high=maxi(piles);
        int ans;

        while(low<=high){
                int mid = low + (high - low) / 2;


            long long  totalH=calHours(piles,mid);
            
            if (totalH<=h){
                high=mid-1;


            }
            else 
                low=mid+1;
        }

return low;


    }
};