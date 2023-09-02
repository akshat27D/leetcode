class Solution {
public:
    int countSegments(string s) {
        int c=0,n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                while(s[i]!=' ' && i<n) i++;
                c++;
            }
        }
        return c;
        
    }
};