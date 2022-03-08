class Solution {
public:
    
    int f(int curr,int total ,int paste_len)
    {
        if(curr>total)return 1e9;
        
        if(curr == total)return 0;
        
        int copy = 2 + f(curr*2,total,curr);
        
        int paste = 1 + f(curr + paste_len , total , paste_len);
        
        return min(copy,paste);
    }
    
    int minSteps(int n) {
        if(n==1)return 0;
        
        return 1 + f(1,n,1);
    }
};