class Solution {
   public static int Product(int[] arr , int[] brr , int i , int j,boolean flag,int[][] dp){
        if(i== arr.length || j==brr.length){
            if(flag){
                return 0;
            }
            else{
                return -10000000;
            }
        }
       if(dp[i][j]!= -1000_000_00){
           return dp[i][j];
           
       }
        int dot = arr[i]*brr[j]+ Product(arr,brr,i+1,j+1,true,dp);
        int fd = Product(arr,brr,i+1,j,false,dp);
        int sd = Product(arr,brr,i,j+1,false,dp);
        return dp[i][j] =  Math.max(arr[i]*brr[j],Math.max(fd,Math.max(dot,sd)));
    }
    public int maxDotProduct(int[] nums1, int[] nums2) {
        int[][] dp = new int[nums1.length][nums2.length];
        for(int a[]:dp){
            Arrays.fill(a,-1000_000_00);
        }
        return Product(nums1,nums2,0,0,true,dp);
        
    }
}