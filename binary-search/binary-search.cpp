class Solution {
public:
    int search(vector<int>& nums, int target) {
        
       return binarysearch(nums,0,nums.size() - 1 , target);
    }
    
    
    int binarysearch(vector<int>& nums,int start,int end, int target)
    {
        
        if(start<=end)
        {
            
            int mid = (start+end)/2;
            
            if(nums[mid] == target)
                return mid;
            
            if(nums[mid] > target)
                return binarysearch(nums,start,mid-1,target);
            
            if(nums[mid]< target)
            return binarysearch(nums,mid+1,end,target);
            
        }
        return -1;
    }

};