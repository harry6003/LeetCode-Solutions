class Solution {
public:
    int search(vector<int>& nums, int target) {
        
       int l = 0;
        int r = nums.size()-1;
        
        while(r>=l)
        {
            int m = (l + r)/2;
            
            if(nums[m] == target)
                return m;
            
            else if(nums[m] > target)
            {
                r = m-1;
            }
            else
                l = m+ 1;
            
        }
        return -1;
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