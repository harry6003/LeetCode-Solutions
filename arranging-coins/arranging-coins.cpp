class Solution {
public:
    int arrangeCoins(int n) {
        
        int a = 1;
        int b = 0;
        
        while(n >= a)
        {
            b++;
            n = n - a;
            a++;
        }
        return b;
        
    }
};