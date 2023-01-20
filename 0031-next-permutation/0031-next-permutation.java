class Solution {
    public static void reverse(int[] nums ,int i,int j){
        while(i<j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
        
    }
    public void nextPermutation(int[] nums) {
        int p=0;
        for(int i=nums.length-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                p=i;
                break;
            }
        }
        int q=0;
        for(int i=nums.length-1;i>p;i--){
            if(nums[i]>nums[p]){
                q=i;
                break;
            }
        }
        if(p==0 && q==0){
            reverse(nums,0,nums.length-1);
            return;
        }
        int temp = nums[p];
        nums[p] = nums[q];
        nums[q] = temp;
        reverse(nums,p+1,nums.length-1);
        
    }
}