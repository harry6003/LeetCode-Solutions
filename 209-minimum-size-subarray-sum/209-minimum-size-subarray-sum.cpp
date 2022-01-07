class Solution {
public:
    
    int maxSumOfSizeK(vector<int> &nums,int k)
    {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i=0;i<k;i++)
        {
            sum += nums[i];
        }
        maxi = max(sum,maxi);
        
        for(int i=k;i<nums.size();i++)
        {
            sum += nums[i] - nums[i-k];
            maxi = max(sum,maxi);
        }
        return maxi;
    }
    
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 1;
        int high = nums.size();
        
        while(low < high)
        {
            int mid = low + (high-low)/2;
            
            if(maxSumOfSizeK(nums,mid) >= target)
            {
                high = mid;
            }
            else if(maxSumOfSizeK(nums,mid) < target)
            {
              low = mid+1;  
            }
        }
        if(maxSumOfSizeK(nums,low) >= target)
        return low;
        else
            return 0;
    }
};