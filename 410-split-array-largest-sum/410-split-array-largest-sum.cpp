class Solution {
public:
    int totalSubarrayForSumK(vector<int> & nums,int mid)
    {
        int k = 0;
       int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i] > mid)
            {
                k++;
                sum  = 0;
            }
            sum += nums[i];
        }
        if(sum > 0)
            k++;
        return k;
        
    }
    
    int splitArray(vector<int>& nums, int m) {
        
        int low = 0;
        int high = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            low = max(low,nums[i]);
            high = high + nums[i];
        }      
        
        while(low<high)
        {
            int mid = low + (high-low)/2;
            
            int a = totalSubarrayForSumK(nums,mid);
          //  cout<<a<<" "<<mid<<endl;
            if(a <= m)
            {
                high = mid;
            }
            else if(a > m)
            {
               low = mid+1;
            }
        }
        return low;
        
    }
};