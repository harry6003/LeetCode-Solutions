class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map <int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        for(auto it = m.begin();it != m.end(); it++)
        {
         if(it->second > nums.size()/2)
              return it->first;
        }
        return -1;
    }
};