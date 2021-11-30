class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map <int,int>  m;
      unordered_map <int,int>  n;
      for(int i=0;i<matrix.size();i++)
      {
        for(int j=0;j<matrix[0].size();j++)
        {
          if(matrix[i][j] == 0)
          {
            m[i]++;
            n[j]++;
          }
        }
      }
      
      for(int i=0;i<matrix.size();i++)
      {
        for(int j=0;j<matrix[0].size();j++)
        {
         if(m.find(i) != m.end())
         {
           matrix[i][j] = 0;
         }
          else if(n.find(j) != n.end())
          {
            matrix[i][j] = 0;
          }
         
        }
      }
      
      return ;
    }
};