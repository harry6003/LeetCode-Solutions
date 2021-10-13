class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 0 || nums.size() == 1)
            return nums.size();
        
        int i= 0;
        int j = 1;
        for( i=1;i<nums.size();i++)
        {
           if(nums[i] != nums[j-1])
           {
               nums[j] = nums[i];
               j++;
           }
        }
        return j;
        
        
    }
};