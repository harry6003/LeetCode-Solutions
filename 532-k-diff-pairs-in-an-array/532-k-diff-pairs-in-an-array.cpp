class Solution {
public:
    int findPairs(vector<int>& A, int k) {
        unordered_map<int, int> m;
        for (int n : A) m[n]++;
        int ans = 0;
        for (auto &[n, cnt] : m) {
            ans += k ? m.count(n - k) : cnt > 1;
        }
        return ans;
    }
};