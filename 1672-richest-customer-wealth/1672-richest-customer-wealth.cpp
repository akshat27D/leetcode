class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        for ( int i=0; i<a.size(); i++ ){
            for ( int j=1; j<a[0].size(); j++ ){
                a[i][0]+=a[i][j];
            }
            a[0][0]=max(a[0][0],a[i][0]);
        }
        return a[0][0];
        
    }
};