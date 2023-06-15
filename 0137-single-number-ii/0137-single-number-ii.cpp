class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        int ans =0;
        for(auto &it:map){
            if(it.second == 1){
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};