class Solution {
public:
    
    bool solve(vector<int> & nums,int i,vector<int>& dp)
    {
        if(i==nums.size()-1)
        {
            return dp[i] = true;
        }
        if(dp[i]!= -1)return dp[i];
        
        for(int j=1;j<=nums[i];j++)
        {
            if(i+j<nums.size())
             if(solve(nums,i+j,dp))
              return dp[i] = true;
        }
        return dp[i] = false;
    }
        
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        // for(int i=nums.size()-1;i>=0;i--)
        // {
        //     bool flag = false;
        //     for(int j = 0;j<nums[i];j++)
        //     {
        //         if()
        //     }
        // }
        return solve(nums,0,dp);
    }
};