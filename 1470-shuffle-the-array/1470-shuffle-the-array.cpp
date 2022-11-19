class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int a=0;
        int b = n;
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                ans[i] = nums[a];
                a++;
            }else{
                ans[i] = nums[b];
                b++;
            }
        }
        return ans;
        
        
    }
};