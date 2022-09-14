class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        int n = nums.length;
        int ans=0;
        int si=0;
        int ei=0;
        int p=1;
        while(ei<n){
            //window grow
            p=p*nums[ei];
            
            //window shrink
            while(p>=k && si<=ei){
                p=p/nums[si];
                si++;
                
                
            }
            // ans cal
            ans+=ei-si+1;
            ei++;
                
                
        }
        return ans;
    }
}