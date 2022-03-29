class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int zero = 0;
        int one = 0;
        int two = nums.size()-1;
        
        while(one<=two)
        {
            switch(nums[one])
            {
                case 0:
                    swap(nums[zero++],nums[one++]);
                    break;
                case 1:
                    one++;
                     break;
                case 2:
                    swap(nums[one],nums[two--]);
                     break;
            }
        }
        
        
    }
};