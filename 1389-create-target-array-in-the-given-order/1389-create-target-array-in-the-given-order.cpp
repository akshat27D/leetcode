class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            auto itPos = ans.begin() + index[i];
            auto newIt = ans.insert(itPos, nums[i]);
        }
        return ans;

    }
};