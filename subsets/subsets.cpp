class Solution {
public:
    vector<vector<int>> ans;
    
    void subsets_helper(int index,vector<int> & nums,vector<int> &subset)
    {
        
        ans.push_back(subset);
        
        for(int i= index;i<nums.size();i++)
        {
            subset.push_back(nums[i]);
            subsets_helper(i+1,nums,subset);
            subset.pop_back();
        }
        return ;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        subsets_helper(0,nums,subset);
        return ans;
    }
};