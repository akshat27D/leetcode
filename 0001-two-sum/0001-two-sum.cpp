class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        int n = nums.size();
        int a =0;
        int b=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    a=i;
                    b=j;
                }
            }
        }
        return {a,b};

        
        
    }
};