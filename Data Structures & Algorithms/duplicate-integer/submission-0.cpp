class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hasDuplicateCheck;

        for (const auto& n : nums)
        {
            if(hasDuplicateCheck.count(n))
            {
                return true;
            }
            hasDuplicateCheck.insert(n);
        }
        return false;
    }
};