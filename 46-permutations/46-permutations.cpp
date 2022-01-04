class Solution {
public:
    
    void helper(vector<vector<int>>& ans,vector<int>& ds,vector<int> & m,vector<int>& nums)
    {
        if(ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(!m[i])
            {
            ds.push_back(nums[i]);
            m[i] = 1;
            helper(ans,ds,m,nums);
            m[i] = 0;
            ds.pop_back();  
            }
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> m(nums.size());
        helper(ans,ds,m,nums);
        return ans;
        
    }
};