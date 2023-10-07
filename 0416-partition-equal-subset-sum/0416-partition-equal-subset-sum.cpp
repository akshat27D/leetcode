class Solution {
public:
    bool solve(int idx , vector<int> nums , int n , int total , vector<vector<int>> &dp){
        if(idx >=n) return 0;
        if(total == 0) return 1;
        if(total < 0) return 0;
        if(dp[idx][total] != -1) return dp[idx][total];
        bool incl = solve(idx+1,nums,n,total-nums[idx],dp);
        bool excl = solve(idx+1,nums,n,total,dp);
        return dp[idx][total] = incl || excl;
    }
    bool bottomUp(int target,vector<int>& nums){
            vector<vector<int>> dp(nums.size()+1,vector<int>( target+1,0));
            for(int i=0;i<nums.size();i++)
                dp[i][0]=1;
            
            for(int index=nums.size()-1;index>=0;index--){
                for(int t=1;t<=target;t++){
                    bool include=0;
                if(t-nums[index]>=0)
                    include=dp[index+1][t-nums[index]];
                    bool exclude=dp[index+1][t];
                    dp[index][t]=(include|| exclude);
                }
            }
            return dp[0][target];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum& 1)
            return false;
        int target=sum/2;
        int index=0;
        return bottomUp(target,nums);
    }
};