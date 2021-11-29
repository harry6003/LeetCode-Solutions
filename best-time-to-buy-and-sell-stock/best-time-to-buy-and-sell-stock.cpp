class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
      if(prices.size()==1)
        return 0;
      
      int maxSum = 0;
      int profit = 0;
      
      for(int i=1;i<prices.size();i++)
      {
        profit = prices[i] - prices[i-1] + profit;
        if(profit > maxSum)
          maxSum = profit;
        
        if(profit < 0)
          profit  = 0;
      }
      return maxSum;
    }
};