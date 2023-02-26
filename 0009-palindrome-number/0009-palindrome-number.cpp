class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x!=0 && x%10==0  )
            return false;
         long int rev =0;
         long int orignal =x;
        while(x!=0){
            rev= rev*10+ x%10;
            x =x/10;
        }
        if(orignal==rev)
            return true;
        else
            return false;
        
    }
};