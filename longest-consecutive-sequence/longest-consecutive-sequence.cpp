class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        
        // sort(nums.begin(),nums.end());
        map<int,int> m;
         for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        
        int maxi = INT_MIN;
        int count = 1;
        int counter = m.size();
         int k = 0;
        for(auto it = m.begin();k < counter-1; it++)
        {
            int a = it->first;
            it++;
            int b = it->first;
            it--;
            if(a + 1 == b)
            {
              count++;
            }
            else
            {
                if(count > maxi)
                    maxi = count;
                count = 1;
            }
            k++;
        }
        
        if(count > maxi)
                maxi = count;
        
        return maxi;
        
    }
};