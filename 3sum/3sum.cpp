class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
          vector<vector<int>> a; 
        if(nums.size() == 0 || nums.size() == 1 || nums.size() == 2 )
            return a;
        
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 || (i>0 && nums[i] != nums[i-1]))
            {
                int low = i+1;
                int high = nums.size()-1;
                int sum = 0 - nums[i];
                
                while(low<high)
                {
                    if(nums[low] + nums[high] == sum)
                    {
                        vector <int> tem;
                        tem.push_back(nums[i]);
                        tem.push_back(nums[low]);
                        tem.push_back(nums[high]);
                        a.push_back(tem);
                        
                        while(low<high && nums[low] == nums[low+1])
                            low++;
                         while(low<high && nums[high] == nums[high-1])
                             high--;
                        
                        low++;
                        high--;
                    }
                    else if((nums[low] + nums[high] < sum))
                            low++;
                    else
                            high--;
                }  
            }
        }
        return a;
    }                          
};