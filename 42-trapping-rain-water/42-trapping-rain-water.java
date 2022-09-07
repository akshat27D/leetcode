class Solution {
    public int trap(int[] height) {
        int n = height.length;
        // left max
        int[] leftMax  = new int[n];
        leftMax[0] = height[0];
        for(int i=1;i<n;i++){
            leftMax[i] = Math.max(height[i] , leftMax[i-1]);
        }
        // right max
        int[] rightmax = new int[n];
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i] = Math.max(height[i] , rightmax[i+1]);
        }
        // loop
        int trappedwater=0;
        for(int i=0;i<n;i++){
            int waterlvl = Math.min(leftMax[i],rightmax[i]);
            trappedwater+=waterlvl-height[i];
        }
        return trappedwater;
        
    }
}