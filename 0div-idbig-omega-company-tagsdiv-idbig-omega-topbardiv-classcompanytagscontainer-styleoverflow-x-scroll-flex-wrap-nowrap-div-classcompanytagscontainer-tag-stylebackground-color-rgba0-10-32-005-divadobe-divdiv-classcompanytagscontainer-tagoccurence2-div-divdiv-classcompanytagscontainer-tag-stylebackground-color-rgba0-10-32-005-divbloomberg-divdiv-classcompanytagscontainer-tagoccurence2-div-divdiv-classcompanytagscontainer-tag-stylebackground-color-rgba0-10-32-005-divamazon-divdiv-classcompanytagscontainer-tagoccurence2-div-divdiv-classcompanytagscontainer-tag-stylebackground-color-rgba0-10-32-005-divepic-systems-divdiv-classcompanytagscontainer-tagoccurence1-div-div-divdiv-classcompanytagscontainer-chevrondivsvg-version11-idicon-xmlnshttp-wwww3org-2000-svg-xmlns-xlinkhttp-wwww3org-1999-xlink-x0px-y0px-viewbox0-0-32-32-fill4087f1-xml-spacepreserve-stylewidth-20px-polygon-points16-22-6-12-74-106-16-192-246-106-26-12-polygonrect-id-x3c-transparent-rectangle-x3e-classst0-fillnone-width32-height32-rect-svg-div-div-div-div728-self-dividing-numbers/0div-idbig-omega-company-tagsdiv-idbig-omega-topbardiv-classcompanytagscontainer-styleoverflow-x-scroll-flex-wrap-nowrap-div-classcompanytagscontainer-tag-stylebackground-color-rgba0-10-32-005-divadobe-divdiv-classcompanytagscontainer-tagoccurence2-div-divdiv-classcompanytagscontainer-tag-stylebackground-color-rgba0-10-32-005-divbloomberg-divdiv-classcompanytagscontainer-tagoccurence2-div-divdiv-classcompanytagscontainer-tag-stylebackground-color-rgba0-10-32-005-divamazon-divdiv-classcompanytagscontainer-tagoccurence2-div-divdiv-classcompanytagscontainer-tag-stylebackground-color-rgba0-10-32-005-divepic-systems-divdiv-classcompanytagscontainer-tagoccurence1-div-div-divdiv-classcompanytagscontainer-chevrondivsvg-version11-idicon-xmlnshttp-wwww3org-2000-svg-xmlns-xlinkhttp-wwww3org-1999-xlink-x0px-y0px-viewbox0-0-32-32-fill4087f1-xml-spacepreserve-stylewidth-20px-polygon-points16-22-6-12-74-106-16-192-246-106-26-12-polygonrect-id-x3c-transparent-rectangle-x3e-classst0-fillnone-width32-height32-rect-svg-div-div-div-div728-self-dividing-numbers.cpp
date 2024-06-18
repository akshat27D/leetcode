class Solution {
public:
    bool isself(int n ){
        int num = n;
        while(n > 0){
            int ld = n%10;
            if( ld==0 ||num % ld !=0 ) return false;
            n = n/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left ; i<=right ; i++){
            if(isself(i)){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};