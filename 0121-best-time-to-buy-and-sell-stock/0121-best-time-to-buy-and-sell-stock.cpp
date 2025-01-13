class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int cost,profit=0,mini=prices[0];

        for(int i=1;i<prices.size();i++){

            cost=prices[i] - mini;

            profit=max(cost,profit);

            mini=min(prices[i],mini);


        }


return profit;



        
        
    }
};