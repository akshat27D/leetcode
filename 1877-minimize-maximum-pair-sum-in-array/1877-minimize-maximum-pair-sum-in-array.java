class Solution {
    public int minPairSum(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int ans =0;
        int i = 0;
        int j = n-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            ans = Math.max(ans,sum);
            i++;
            j--;
        }
        return ans;
        
        
    }
}