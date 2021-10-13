class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]] == 2)
                return nums[i];
        }
        return 0;
    }
};