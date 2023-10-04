class Solution {
public:
    int solve(vector<vector<char>>& mat, int i , int j , int &maxi,vector<vector<int>> &dp){
        if(i>=mat.size() || j>=mat[0].size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int right  = solve(mat,i,j+1 , maxi,dp);
        int left = solve(mat,i+1,j , maxi,dp);
        int diag = solve(mat,i+1,j+1 , maxi,dp);
        
        if(mat[i][j]=='1'){
            dp[i][j] = 1+min(diag,min(right,left));
            maxi = max(maxi,dp[i][j]);
            return dp[i][j];
        }else{
            return dp[i][j] =0;
        }
        
        
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        int maxi =0;
        solve(matrix,0,0,maxi,dp);
        return maxi*maxi;
    }
};