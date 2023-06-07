class Solution {
    public int calculateMini(int[][]dungeon , int cr , int cc , int[][] dp){
        if(cr==dungeon.length || cc == dungeon[0].length){
            return Integer.MAX_VALUE;
        }
        if(cr == dungeon.length-1 && cc==dungeon[0].length-1){
            return dungeon[cr][cc]>0 ? 1:1-dungeon[cr][cc];
        }
        if(dp[cr][cc] != -1){
            return dp[cr][cc];
        }
        int l = calculateMini(dungeon,cr , cc+1,dp);
        int r = calculateMini(dungeon,cr+1,cc,dp);
        int hp = Math.min(r,l)-dungeon[cr][cc];
        return dp[cr][cc] = hp>0?hp:1;
        
    }
    public int calculateMinimumHP(int[][] dungeon) {
        int[][] dp = new int[dungeon.length][dungeon[0].length];
        for(int []i : dp){
            Arrays.fill(i,-1);
            
        }
        return calculateMini(dungeon,0,0,dp);
        
    }
}