class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n=v.size();
        if(n<=1)return 0;
        vector<int> noStock(n,0) , inHand(n,0) , Sold(n,0);
        
        noStock[0]=0;
        inHand[0]=-v[0];
        Sold[0]=0;
        
        for(int i=1;i<n;i++){
            noStock[i]=max(noStock[i-1],Sold[i-1]);
            inHand[i]=max(inHand[i-1],noStock[i-1]-v[i]);
            Sold[i]=inHand[i-1]+v[i];
        }
        return max(noStock[n-1],Sold[n-1]);
    }
};