class Solution {
public:
bool isValidSerialization(string preorder) {
    if (preorder.empty()) return false;
    preorder+=',';
    int sz=preorder.size(),idx=0;
    int capacity=1;
    for (idx=0;idx<sz;idx++){
        if (preorder[idx]!=',') continue;
        capacity--;
        if (capacity<0) return false;
        if (preorder[idx-1]!='#') capacity+=2;
    }
    return capacity==0;
}
};