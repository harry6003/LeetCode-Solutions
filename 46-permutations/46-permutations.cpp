class Solution {
public:
    
    void helper(vector<vector<int>>& ans,vector<int>& nums,int begin)
    {
        if(begin == nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        
        for(int i=begin;i<nums.size();i++)
        {
            swap(nums[i],nums[begin]);
            helper(ans,nums,begin+1);
            swap(nums[i],nums[begin]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(ans,nums,0);
        return ans;
        
    }
};