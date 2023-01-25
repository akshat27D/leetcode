class Solution {
public:
    int reverse(int x) {
        long rev =0;
        while(x!=0){
            int ld = x%10;
            rev = rev*10 + ld;
            x = x/10;
        }
        if(INT_MIN<=rev && INT_MAX>=rev){
            return rev;
        }else{
            return 0;
        }
        
    }
};