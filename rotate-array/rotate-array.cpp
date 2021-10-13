class Solution {
public:
    
//     void leftrotate(vector<int>& nums, int k)
//     {
//         int a = nums.size() - k;
        
       
        
        
//     }
    
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k % n;
        
        k = n - k;
        
         reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin() , nums.end());
        
    }
};