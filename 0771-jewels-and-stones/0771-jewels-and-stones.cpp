class Solution {
public:
    int numJewelsInStones(string str, string atr) {
        int count=0;
        int  n = str.size();
        int m = atr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(str[i]==atr[j]){
                    count++;
                }
            }
            
        }
        return count;
        
        
    }
};