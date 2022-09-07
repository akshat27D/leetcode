class Solution {
    public int[] productExceptSelf(int[] nums) {
        int length = nums.length;
		
		int[] left_products = new int[length];
		left_products[0] = 1;
		
		int[] right_products = new int[length];
		right_products[length-1] = 1;
		
		int[] output = new int[length];

		for (int i = 1; i < length; i++) {
			left_products[i] = nums[i-1] * left_products[i-1];
		}
		
		for (int i = length-2; i >= 0; i--) {
			right_products[i] = nums[i+1] * right_products[i+1];
		}
		
		for (int i = 0; i < length; i++) {
			output[i] = right_products[i] * left_products[i];
		}
		
		return output;
        
        
    }
}