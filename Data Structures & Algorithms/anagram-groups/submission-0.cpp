class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> res;
        for(const auto& s:strs)
        {
            string sortedString =s;
            sort(sortedString.begin(), sortedString.end());
            res[sortedString].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
    }
};
