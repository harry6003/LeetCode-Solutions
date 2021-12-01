class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      
      int i=0;
      int n = nums.size();
      for(i = n-1 ; i>0 ;i--)
      {
        if(nums[i] > nums[i-1])
          break;
      }
      
      if(i != 0)
      {
        
        for(int j=n-1;j>=i;j--)
        {
          if(nums[j] > nums[i-1])
          {
            swap(nums[j],nums[i-1]);
            break;
          }
        }
        
        
        
      }
      
      reverse(nums.begin()+i,nums.end());
    }
};