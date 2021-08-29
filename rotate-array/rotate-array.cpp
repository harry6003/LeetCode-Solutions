class Solution {
public:
    
    void leftrotate(vector<int>& nums, int k)
    {
        int a = nums.size() - k;
        
        reverse(nums.begin(),nums.begin()+a);
        reverse(nums.begin()+a,nums.end());
        reverse(nums.begin() , nums.end());
        
        
    }
    
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k % n;
        
        leftrotate(nums,k);
        
    }
};