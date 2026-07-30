class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1) return 0;
        int maxi = INT_MIN;
        int buy = prices[0];

        for(int i = 1; i < prices.size(); i++){
            int sell = prices[i];
            int profit = sell - buy;
            if(sell - buy > maxi ) maxi = max(profit,maxi);
            if(prices[i] < buy){
                buy = prices[i];
            } 
            cout<<maxi<<endl;
            // cout<< buy;
            
        }
        
        if(maxi <= 0) return 0;
        return maxi;

    }
};
