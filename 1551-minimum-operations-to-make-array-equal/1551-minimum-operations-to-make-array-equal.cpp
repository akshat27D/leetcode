class Solution {
public:
    int minOperations(int n) {
        vector<int> res(n+1);
        for(int i=0;i<n;i++){
            res[i] = (2*i)+1;
        }
        int s = 0;
        int e = res[n-1];
        int mid  = (s+e)/2;
        int ans = 0;
        for(int i=0;i<n;i++){
            ans += abs(res[i]-mid);
        }
        return ans/2;
        
        
    }
};