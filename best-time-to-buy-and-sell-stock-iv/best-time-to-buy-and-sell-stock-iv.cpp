class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(prices.size()==0 || k==0)return 0;
        vector<vector<int>> dp(k+1,vector<int> (prices.size()));
        
        for(int i=0;i<=k;i++)
        {
            int mini = 0;
            for(int j=0;j<prices.size();j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = dp[i][j-1];
                    for(int k = 0;k<j;k++)
                    {
                        dp[i][j] = max(dp[i][j],dp[i-1][k] + prices[j] - prices[k] );
                    }
                    
                    // dp[i][j] = max(dp[i][j-1] ,dp[i-1][mini] + prices[j] - prices[mini]);
                    // if(prices[j]<prices[mini])
                    // {
                    //     mini = j;
                    // }
                }
            }
            
            
        }
        
        
        for(int i=0;i<=k;i++)
        {
            for(int j=0;j<prices.size();j++)
            {
                cout<<dp[i][j]<<" ";       
            }
            cout<<endl;
        }
        
        return dp[k][prices.size()-1];
    }
};