class Solution {
public:
    int numberOfWays(string s) {
        int total = 0;
        int seats =0;
        int plant =0;
        int mod = (int)((1e9)+7);
        long long int ans = 1; 
        bool firstCorridor = false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='S'){
                total++;
                seats++;
            }
            else if(seats==0){
                plant++;
            }
            if(seats==2){
                if(firstCorridor){
                    ans = ans * (plant+1);
                    ans%=mod;

                }
                firstCorridor = true;
                seats =0;
                plant =0;
            }
        }
        if(total==0 || (total&1)!=0){
            return 0;
        }
        return (int)ans;
        
    }
};