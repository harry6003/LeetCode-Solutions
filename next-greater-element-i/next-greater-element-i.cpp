class Solution {
public:
    
    
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        
        int siz1 = nums1.size();
        int siz2 = nums2.size();
        
        vector <int> ans;
        int flag = 0;
        for(int i=0;i<siz1;i++)
        {
            flag = 0;
            for(int j=0;j<siz2;j++)
            {
                if(nums2[j] == nums1[i])
                {
                    for(int k=j+1;k<siz2;k++)
                    {
                        if(nums2[k] > nums1[i])
                        {
                             ans.push_back(nums2[k]);
                             flag = 1; 
                            break;
                        } 
                    }
                }
                
               if(flag)
               {
                 break;  
               }
            }
            
            if(!flag)
            {
              ans.push_back(-1);  
            }
        }
        
        
        return ans;
        
    }
};