class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()<=1)
            return nums.size();
        
        
        stack<int> s;
        for(int i=0;i<nums.size();i++)
        {
          if(i==0 || s.top() != nums[i])
          {
             s.push(nums[i]);
          }
        }
        int n = s.size();
        for(int i=s.size()-1;i>=0;i--)
        {
            nums[i] =s.top();
            s.pop();
        }
        return n;
        
    }
};