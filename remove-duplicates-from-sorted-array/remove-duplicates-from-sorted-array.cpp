class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()<=1)
            return nums.size();
        
        
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
          if(m.count(nums[i]) == 0)
          {
              m[nums[i]] = i;
          }
        }
        
        auto it = m.begin();
        for(int i=0;i<m.size();i++)
        {
            nums[i] = it->first;
            it++;
        }
        return m.size();
        
    }
};