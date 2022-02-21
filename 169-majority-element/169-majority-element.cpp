class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int maxi = nums[0];
        int counter = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(0 == counter)
            {
                counter++;
                maxi = nums[i];
            }
            else
            {
                if(nums[i] == maxi)
                    counter++;
                else
                    counter--;
            }
        }
        return maxi;
        
    }
};