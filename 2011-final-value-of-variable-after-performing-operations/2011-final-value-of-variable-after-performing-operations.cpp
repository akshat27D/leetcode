class Solution {
public:
    int finalValueAfterOperations(vector<string>& nums) {
        int n= nums.size();
        int ans =0;
        for(int i=0;i<n;i++){
            if(nums[i] == "--X" || nums[i] == "X--"){
                ans = ans-1;
            }else{
                ans+=1;
            }
        }
        return ans;
        
    }
};