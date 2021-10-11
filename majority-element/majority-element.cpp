class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
       unordered_map <int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        for(auto &it:m)
        {
            if(it.second > floor(nums.size()/2))
               return it.first;
        }
        return nums[0];
    }
};