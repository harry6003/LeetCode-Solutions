class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        string tmp_sorted;
        
        for (auto word : strs) {
            tmp_sorted = countSort(word);
            m[tmp_sorted].push_back(word);
        }
        
        vector<vector<string>> res;
        for (auto [word, list] : m) {
            res.push_back(list);
        }
        
        return res;
    }
    
    string countSort(string word) {
        vector<int> count(26);
        string res;
        
        for (auto ch : word) count[ch - 'a']++;
        for (int i = 0; i < 26; i++) res += string(count[i], i+'a');
        return res;
    }
};