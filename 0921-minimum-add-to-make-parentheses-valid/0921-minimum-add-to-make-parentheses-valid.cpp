class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans =0;
        int bal = 0;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(ch=='('){
                ans++;
            }else if(ch==')'){
                if(ans > 0){
                    ans--;
                }else{
                    bal++;
                }
            }
        }
        return ans+bal;
        
    }
};