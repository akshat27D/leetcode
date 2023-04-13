class Solution {
    public static int Lines(int[] arr , int[] brr){
        int[][] dp = new int[arr.length+1][brr.length+1];
        for(int i=1;i<dp.length;i++){
            for(int j=1 ;j<dp[0].length;j++){
                int ans =0;
                if(arr[i-1]==brr[j-1]){
                    ans = 1+ dp[i-1][j-1];
                }else{
                    ans  = Math.max(dp[i-1][j],dp[i][j-1]);
                }
                dp[i][j] = ans;
            }
        }
        return dp[dp.length-1][dp[0].length-1];
    }
    public int maxUncrossedLines(int[] nums1, int[] nums2) {
        return Lines(nums1,nums2);
        
    }
}