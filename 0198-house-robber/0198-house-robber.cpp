class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size()-1;

   if(n==0){
        return nums[0];
    }
    if(n==1){
        return max(nums[0],nums[1]);
    }
    
    int first=nums[0];
    int second=max(nums[0],nums[1]);
    int curr;
    for(int i=2;i<=n;i++){
        curr=max(first+nums[i],second);
        first=second;
        second=curr;
    }
    return curr;
        
    }
};