class Solution {
public:
    string longestPalindrome(string s) {
        int l ,h;
        int strt =0;
        int end = 1;
        for(int i=0;i<s.length();i++){
            // even substring
            l = i-1;
            h =i;
            while(l>=0 && h<s.length() && s[l]==s[h]){
                if(h-l+1 > end){
                    strt=l;
                    end = h-l+1;
                }
                l--;
                h++;
            }
            // odd substring ;
            l = i-1;
            h = i+1;
            while(l>=0 && h<s.length() && s[l]==s[h]){
                if(h-l+1 > end){
                    strt = l;
                    end = h-l+1;
                }
                l--;
                h++;
            }
        }
       // printString(s,strt,strt+end-1);
        string ans="";
        for(int i=strt ; i<=strt+end-1;i++){
            ans+=s[i];
        }
        return ans;
        
    }
};