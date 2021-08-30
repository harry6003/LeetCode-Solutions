class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector <int> temp;
        vector <int> ans;
        int n = nums.size();
        for(int i=0;i<2*n;i++)
        {
            if(i<n)
                temp.push_back(nums[i]);
            else
                temp.push_back(nums[i-n]); 
        }
        
        for(int i=0;i<n;i++)
        {
            int j;
            for( j=0;j<2*n;j++)
            {
                if(j>i && temp[j] > nums[i] )
                {
                    ans.push_back(temp[j]);
                    break;
                }
            }
            
            if(j == 2*n)
            {
                ans.push_back(-1); 
            }
        }
        
        return ans;
        
    }
};