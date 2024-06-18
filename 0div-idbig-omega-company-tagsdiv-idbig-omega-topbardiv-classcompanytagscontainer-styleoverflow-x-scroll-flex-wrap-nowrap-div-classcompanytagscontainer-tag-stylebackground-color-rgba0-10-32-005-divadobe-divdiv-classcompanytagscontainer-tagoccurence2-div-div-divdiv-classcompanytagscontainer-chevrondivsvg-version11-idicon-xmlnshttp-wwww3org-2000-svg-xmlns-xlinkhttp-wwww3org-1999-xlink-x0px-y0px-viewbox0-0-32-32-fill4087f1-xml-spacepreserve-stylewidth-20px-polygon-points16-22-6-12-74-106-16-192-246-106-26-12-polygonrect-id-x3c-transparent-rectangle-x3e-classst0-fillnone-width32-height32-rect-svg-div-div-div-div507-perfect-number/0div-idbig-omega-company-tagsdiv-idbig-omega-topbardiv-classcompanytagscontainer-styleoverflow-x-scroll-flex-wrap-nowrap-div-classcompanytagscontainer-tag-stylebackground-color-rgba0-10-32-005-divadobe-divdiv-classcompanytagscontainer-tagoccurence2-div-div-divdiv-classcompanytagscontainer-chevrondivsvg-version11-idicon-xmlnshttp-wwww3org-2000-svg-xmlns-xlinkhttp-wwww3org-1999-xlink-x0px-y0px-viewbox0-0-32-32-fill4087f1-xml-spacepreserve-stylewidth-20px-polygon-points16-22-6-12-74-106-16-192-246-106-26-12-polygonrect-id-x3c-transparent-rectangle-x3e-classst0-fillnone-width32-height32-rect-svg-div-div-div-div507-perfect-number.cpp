class Solution {
public:
    bool checkPerfectNumber(int num) {
        int n = num;
        int sum = 0;
        for(int i=1;i<num;i++){
            if(num%i==0) sum+=i;
        }
        if(n==sum) return true;
        return false;
        
    }
};