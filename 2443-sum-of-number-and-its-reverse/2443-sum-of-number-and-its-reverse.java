class Solution {
    
    public boolean sumOfNumberAndReverse(int num) {
        for(int i=0;i<=num;i++){
            int rev=0;
            int n =i;
            while(n!=0){
                int r = n%10;
                rev = rev*10 + r;
                n=n/10;
            }
            if((i+rev)==num)
                return true;
            
        }
         return false;
        
    }
   
}