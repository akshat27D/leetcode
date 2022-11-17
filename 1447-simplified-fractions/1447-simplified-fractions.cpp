class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> arr;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
               int g=__gcd(i,j);
                if(g==1)
                {
                    string x=to_string(i);
                    x.push_back('/');
                    x+=to_string(j);
                    arr.push_back(x);
                }
            }
        }
        return arr;
        
    }
};