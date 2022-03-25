class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int curr_sum = 0;
        int max_sum = 0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(curr_sum + (nums[i]-nums[i-1]) > 0 )
            {
                curr_sum += (nums[i]-nums[i-1]);
                max_sum = max(max_sum, curr_sum);
            }
            else
            {
                curr_sum = 0;
            }
        }
        return max_sum;
        
    }
};