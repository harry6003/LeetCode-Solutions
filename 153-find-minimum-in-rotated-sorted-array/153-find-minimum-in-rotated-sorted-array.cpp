class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        int ans = 0;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(nums[mid] >= nums[s])
            {
                if(nums[ans] > nums[s])
                {
                  //  cout<<ans<<"  "<<s<<endl;
                    ans = s;
                }
                s = mid+1;
            }
            else if(nums[mid] < nums[s])
            {
                ans = mid;
                e = mid -1;
                
            }
           
        }
        return nums[ans];
    }
};