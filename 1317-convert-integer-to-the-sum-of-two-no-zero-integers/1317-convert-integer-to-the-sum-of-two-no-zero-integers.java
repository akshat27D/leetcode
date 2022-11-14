class Solution {
    public static boolean haszero(int n){
        if(n==0){
            return true;
        }
        while(n!=0){
            int digit=n%10;
            if(digit==0){
                return true;
            }
            n/=10;
        }
        return false;
    }
    public int[] getNoZeroIntegers(int n) {
        int a =n;
        int b=0;
        while(haszero(a) || haszero(b)){
            a--;
            b++;
        }
        int[] ret = {a,b};
        return ret;
    
        
    }
}