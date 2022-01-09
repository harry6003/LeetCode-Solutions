class Solution {
public:
    double myPow(double x, int n) {
       int k = abs(n);
      
      if(k == 0)
         return 1;
      
      if(k%2 == 1)
      {
        if(n<0)
          return 1/(x*myPow(x,k-1));
        return x*myPow(x,n-1);
      }
      double ans = myPow(x,k/2);
      
      if(n<0)
        return 1/(ans*ans);
      return ans*ans;
    }
};