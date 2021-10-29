class Solution {
public:
   int findMin(vector<int> &num) {
        int start=0,end=num.size()-1;
        
        while (start<end) {
           
            int mid = (start+end)/2;
            
            if (num[mid]<num[end]) {
                end = mid;
            } else {
                start = mid+1;
            } 
        }
        
        return num[start];
    }
};