class Solution {
public:
    int solve(vector<int>& p){
        int n  = p.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));
        for(int idx = n-1;idx>=0;idx--){
            for(int buy =0 ;buy<=1;buy++){
                int profit =0;
                if(buy){
                    int bk = -p[idx]+dp[idx+1][0];
                    int sk = 0+dp[idx+1][1];
                    profit = max(bk,sk);
                }else{
                    int sk = p[idx] + dp[idx+1][1];
                    int skk = 0+dp[idx+1][0];
                    profit = max(sk,skk);
                }
                dp[idx][buy] = profit;
            }
        }
        return dp[0][1];
    }
    int maxProfit(vector<int>& prices) {
        return solve(prices);
    }
};