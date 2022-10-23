class Solution {
    public boolean carPooling(int[][] trips, int capacity) {
        int[] prefix = new int[1001];
        
        int min = 1500;
        int max = -1;
        
        for(int[] arr : trips){
			if(arr[0] > capacity)return false;
            prefix[arr[1]] += arr[0];
            prefix[arr[2]] -= arr[0];
            
            min = Math.min(arr[1], min);
            max = Math.max(arr[2], max);
        }
        
        for(int i = min + 1; i <= max; i++){
            prefix[i] += prefix[i - 1];
            
            if(prefix[i] > capacity)return false;
        }
        return true;
        
    }
}