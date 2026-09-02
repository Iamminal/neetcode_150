class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> targetIndex;
        for(int i =0; i< nums.size();i++)
        {
            for(int j =0; j<=i ;j++)
            {
                if(i==j)
                {
                    break;
                }
                if(nums[i]+nums[j]== target)
                {
                    targetIndex.push_back(i);
                    targetIndex.push_back(j);
                }
            }
        }
        sort(targetIndex.begin(), targetIndex.end());
        return targetIndex;
    }
};
