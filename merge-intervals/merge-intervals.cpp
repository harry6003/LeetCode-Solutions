class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> a;
        // if(intervals.size() == 0)
        //     return a;
        
        sort(intervals.begin(),intervals.end());
        
        a.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(a.back()[1] >= intervals[i][0])
            {
                a.back()[1] = max(a.back()[1], intervals[i][1]);
            }
            else
            {
                a.push_back(intervals[i]);
            }
        }  
         return a;
    }
};