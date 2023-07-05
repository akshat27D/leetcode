class Solution {
public:
    int getNumOfBits(int nums){
        int count = 0;
        while(nums){
            nums &= (nums-1);
            count++;
        }
        return count;
    }
    int minimizeXor(int num1, int num2) {
        int bits = getNumOfBits(num2);
        int ans = 0;
        for(int i =31 ; i>= 0; i--){
            int mask = 1 << i;
			// check if no of bits are more than high bits present in num1 
			// OR current bit of num 1 is high then set bit of ans to 1
            if((bits-1 == i) || ((num1&mask) && bits)){
                ans|= mask;
                bits--;
            }
        }
        return ans;
    }
};