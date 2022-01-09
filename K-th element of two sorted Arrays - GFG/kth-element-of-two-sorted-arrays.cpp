// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int a[], int b[], int n, int m, int k)
   {
       int l=min(a[0],b[0]);
       int h=max(a[n-1],b[m-1]);
       while(l<=h){
           int mid=l+(h-l)/2;
           int x=upper_bound(a,a+n,mid)-a;
           int y=upper_bound(b,b+m,mid)-b;
           if(x+y<k) l=mid+1;
           else h=mid-1;
       }
       return l;
   }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends