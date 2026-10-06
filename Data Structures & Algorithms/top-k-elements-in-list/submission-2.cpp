class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result{};
        unordered_map<int,int> allSets{};
        for(const auto& n:nums){
            allSets[n]++;
        }
        priority_queue<pair<int, int>> pq;
        for (const auto& pair : allSets) {
            pq.push({pair.second, pair.first});
        }
        for(int i = 0; i < k; i++) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
