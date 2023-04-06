class Solution {
    public int lengthOfLIS(int[] nums) {
        int ans = lis(nums);
        return ans;
        
    }
    public static int lis(int[] arr){
        int dp[] = new int[arr.length];
        dp[0] = arr[0];
        int len =1;
        for(int i=1;i<arr.length;i++){
            if(arr[i]>dp[len-1]){
                dp[len] = arr[i];
                len++;
            }else{
                int ith = Search(dp,0,len-1,arr[i]);
                dp[ith]=arr[i];
                
            }
        }
        return len;
    }
    private static int Search(int dp[] , int si , int ei ,int item){
        int ans =0;
        while(si<=ei){
            int mid = (si+ei)/2;
            if(dp[mid]>=item){
                ans =mid;
                ei = mid-1;
            }else{
                si=mid+1;
                
            }
        }
        return ans;
    }
}