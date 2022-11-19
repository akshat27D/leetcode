class Solution {
public:
    string defangIPaddr(string str) {
        string s;
        for(int i=0;i<str.size();i++){
            if(str[i]=='.'){
                s+="[.]";
            }else{
                s+=str[i];
            }
        }
        return s;
    }
};