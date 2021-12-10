class Solution {
public:
    int trap(vector<int>& height) {
        
        if(height.size()<=2)
            return 0;
        
        vector <int> left(height.size());
        vector <int> right(height.size());
        int lmaxi = INT_MIN;
        int rmaxi = INT_MIN;
        int ans = 0;
        for(int i =0 ;i<height.size();i++)
        {
            if(height[i]>lmaxi)
            {
                lmaxi = height[i];
            }
            left[i] = lmaxi;
         
        }
        for(int i = height.size()-1 ;i>=0;i--)
        {
            if(height[i]>rmaxi)
            {
                rmaxi = height[i];
            }
            right[i] = rmaxi;
        }
        
        for(int i=0;i<height.size();i++)
        {
            if(right[i]>=height[i] && left[i]>= height[i])
            {
                ans += min(right[i],left[i]) - height[i];
                cout<<ans<<" "<<i<<endl;
            }
           cout<<left[i]<<" "<<right[i]<<endl;
        }
        return ans;
            
        
    }
};