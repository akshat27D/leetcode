class Solution {
    int mod= 1000000007;
    int[] dx= {-2,-1,1,2,2,1,-1,-2};
    int[] dy= {1,2,2,1,-1,-2,-2,-1};
    int[][][] dp= new int[5][4][5002];
    
    public int knightDialer(int n) {
        int[][] nums= new int[4][3];
        nums[3][1]= 0;
        nums[3][0]= -1;
        nums[3][2]= -1;
        int x=1;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                nums[i][j]=x;
                x++;
            }
        }
        
        for(int i=0; i<5; i++){
            for(int j=0; j<4; j++){
                for(int k=0; k<5002; k++){
                    dp[i][j][k]= -1;
                }
            }
        }
        
        int ans=0;
        for(int i=0; i<4; i++){
            for(int j=0; j<3; j++){
                if(nums[i][j]!=-1){
                    ans= (ans+solve(nums,i,j,n-1))%mod;
                }
            }
        }
        
        return ans;
    }
    
    public int solve(int[][] nums, int i, int j, int n){
        if(i<0 || j<0 || i>=4 || j>=3 || nums[i][j]==-1){
            return 0;
        }
        
        if(n==0){
            return 1;
        }
        
        if(dp[i][j][n]!=-1){
            return dp[i][j][n];
        }
        
        int t=0;
        for(int k=0; k<8; k++){
            int x= i+dx[k];
            int y= j+dy[k];
            
            t= (t+solve(nums,x,y,n-1))%mod;
        }
        
        return dp[i][j][n] = (t%mod);
    }
}