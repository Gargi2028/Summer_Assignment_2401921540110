class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int m = 0;
      int n = 1;
      int maxProfit = 0;
      while(n <prices.size()){
        if(prices[m]<prices[n]){
            int profit = prices[n]-prices[m];
            maxProfit = max(maxProfit,profit);
        }else{
            m=n;
        }
        n++;
      }
      return maxProfit;
        
    }
};
