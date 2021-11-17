class Solution {
public:
    int uniquePaths(int m, int n) {
      
      if(m ==1 && n==1)
        return 1;
      if(m ==1 && n == 2 || m==2 && n==1)
      return 1;
      if(m==2 && n==2)
        return 2;
        
        int arr[m][n];
      
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(i==m-1 || j == n-1)
            arr[i][j] = 1;
        }
      }
      
      for(int a = m-2; a>=0; a--)
      {
        for(int b = n-2;b>=0;b--)
        {
          arr[a][b] = arr[a+1][b] + arr[a][b+1];
        }
      }
      
      return arr[0][0];
      
    }
};