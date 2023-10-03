class Solution {
public:
    int solve(vector<int>& nums , int tar , vector<int>& dp){
        if(tar<0) return 0;
        if(tar==0) return 1;
        int ans=0;
        if(dp[tar]!=-1){
            return dp[tar];
        }
        for(int i=0;i<nums.size();i++){
            ans+=solve(nums,tar-nums[i],dp);
        }
        dp[tar] = ans;
        return dp[tar] ;
    }
    int tab(vector<int>& nums , int tar){
        vector<unsigned int> dp(tar+1,0);
        dp[0]=1;
        for(int i=1;i<=tar;i++){
            for(int j=0;j<nums.size();j++){
                if(i-nums[j]>=0)
                    dp[i] +=dp[i-nums[j]];
            }
        }
        return dp[tar];
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        //vector<int> dp(target+1,-1);
        return tab(nums,target);
        
    }
};