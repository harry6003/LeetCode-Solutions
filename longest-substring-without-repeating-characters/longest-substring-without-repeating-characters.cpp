class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.size() <=1)
            return s.size();
        
        int ans = 0;
        for(int i=0;i<s.size();i++)
        {
            int count = 1;
             unordered_map <char,int> m;
            for(int j=i;j<s.size();j++)
            {
               
                m[s[j]]++;
               // cout<<m.size()<<endl;
                if(m.size() != count)
                {
                   if((int)m.size() > ans)
                       ans = m.size();
                    count = 1;
                    break;
                }
                
                count++;
            }
             if((int)m.size() > ans)
                       ans = m.size();
        }
        return ans;
    }
};