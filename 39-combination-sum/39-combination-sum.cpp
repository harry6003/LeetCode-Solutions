class Solution {
public:
    
    void helper(vector<int>& candidates, int target,vector<vector<int>>  & ans,int i,int sum,vector<int> & temp)
    {
      //  cout<<sum<<" "<<i<<endl;
        if(i>=candidates.size())return;
        if(i<candidates.size() && sum == target)
        {
            ans.push_back(temp);
            return;
        }
         if(sum + candidates[i]<=target)
        {
            temp.push_back(candidates[i]);
            helper(candidates,target,ans,i,sum+candidates[i],temp);
            //helper(candidates,target,ans,i+1,sum+candidates[i],temp);
            
            temp.pop_back();
            helper(candidates,target,ans,i+1,sum,temp);
        }
        else
        {
            helper(candidates,target,ans,i+1,sum,temp);
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(candidates,target,ans,0,0,temp);
        return ans;
    }
};