class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long int  missing =1;
        int count =0;
        int i=0;
        while(missing<=n){
            if(i<nums.size() && missing>=nums[i]){
                missing+=nums[i];
                i++;
            }else{
                count++;
                missing+=missing;
            }
        }
        return count;
        
    }
};