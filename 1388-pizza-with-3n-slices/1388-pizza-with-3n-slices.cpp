class Solution {
public:
    int dp[501][2][168];
    int solve(int i,vector<int>& slices,bool flag,int m){
        if(i >= slices.size() || m == 0)
            return 0;
        
        if(dp[i][flag][m] != -1)
            return dp[i][flag][m];
        
        if(i == 0){
            return dp[i][flag][m] = max(solve(i+1,slices,flag,m),slices[i]+solve(i+2,slices,true,m-1));
        }else if(i == slices.size()-1 and flag == true){
            return dp[i][flag][m] = solve(i+1,slices,flag,m);
        }else{
            return dp[i][flag][m] = max(solve(i+1,slices,flag,m),slices[i]+solve(i+2,slices,flag,m-1));
        }
    }
    int maxSizeSlices(vector<int>& slices) {
        memset(dp,-1,sizeof(dp));
        int n=slices.size();
        return solve(0,slices,false,n/3);
    }
};