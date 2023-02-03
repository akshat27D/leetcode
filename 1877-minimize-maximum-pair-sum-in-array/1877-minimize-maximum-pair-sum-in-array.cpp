class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int j= n-1;
       int ans =0;
        while(i<j){
            int sum = nums[i]+nums[j];
            ans = max(sum,ans);
            i++;
            j--;
            
        }
        return ans;
        
    }
};