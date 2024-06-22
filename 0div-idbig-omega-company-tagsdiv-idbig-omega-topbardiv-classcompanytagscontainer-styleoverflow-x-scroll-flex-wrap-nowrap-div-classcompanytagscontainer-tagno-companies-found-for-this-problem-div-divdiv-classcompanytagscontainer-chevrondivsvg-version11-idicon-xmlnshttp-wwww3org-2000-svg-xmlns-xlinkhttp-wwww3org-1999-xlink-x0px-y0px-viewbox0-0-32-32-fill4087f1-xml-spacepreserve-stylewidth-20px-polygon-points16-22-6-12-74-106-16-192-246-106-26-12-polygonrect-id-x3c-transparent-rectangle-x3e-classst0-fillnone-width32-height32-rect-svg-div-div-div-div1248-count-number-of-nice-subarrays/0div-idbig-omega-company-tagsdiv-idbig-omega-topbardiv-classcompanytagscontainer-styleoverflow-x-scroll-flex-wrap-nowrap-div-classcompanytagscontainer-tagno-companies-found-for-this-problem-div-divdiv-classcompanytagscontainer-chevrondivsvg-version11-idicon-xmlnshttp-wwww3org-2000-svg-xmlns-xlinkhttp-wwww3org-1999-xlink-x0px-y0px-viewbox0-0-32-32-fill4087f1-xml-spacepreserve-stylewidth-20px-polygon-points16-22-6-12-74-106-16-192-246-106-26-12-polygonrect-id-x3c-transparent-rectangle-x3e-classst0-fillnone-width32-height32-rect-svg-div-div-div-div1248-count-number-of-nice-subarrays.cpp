class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int n = nums.size();
        int rst = 0 ;
        int acc = 0;
        map[0] = 1;
        for(int i=0;i<n;i++){
            acc += (nums[i]%2);
            rst +=map[acc-k];
            map[acc]++;
        }
        return rst;
    }
};