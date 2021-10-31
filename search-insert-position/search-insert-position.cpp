class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size()-1;
        
        while(low < high)
        {
            int mid = (low+high)/2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                high = mid;
            else
                low = mid+1;
        }
        
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        return searchInsert(nums,target);
        
    }
};