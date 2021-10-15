class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
       
        if(nums.size() < 3)
            return ans;
        
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-3;i++)
        {
            if(i == 0 || (i>0 && nums[i] != nums[i-1]))
            {
                 for(int j=i+1;j<nums.size()-2;j++)
                 {
                    if(j==(i+1) || nums[j]  != nums[j-1])
                    {
                        int low = j+1;
                        int high = nums.size()-1;
                        int sum = target - (nums[i] + nums[j]);
                        
                        while(low<high)
                        {
                           if(nums[low] + nums[high] == sum)
                           {
                                 vector <int> a;
                                 a.push_back(nums[low]);
                                 a.push_back(nums[high]);
                                 a.push_back(nums[i]);
                                 a.push_back(nums[j]);
                                 ans.push_back(a);
                                
                               
                               while(low<high && nums[low] == nums[low+1])
                                   low++;
                               while(low<high && nums[high] == nums[high-1])
                                   high--;
                               
                               low++;
                               high--;
                           }
                           else if(nums[low] + nums[high] < sum)
                           {
                               low++;
                           }
                           else 
                           {
                               high--;
                           }
                        }
                    }
                 }
             
            }
        }
        // for(auto it = s.begin();it != s.end();it++)
        //     ans.push_back(*it);
        return ans;
    }
};