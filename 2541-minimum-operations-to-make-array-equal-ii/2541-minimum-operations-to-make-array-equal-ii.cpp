class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        
        if(k==0){
            if(nums1 == nums2)
                return 0;
            return -1;
        }
        
        int n = nums1.size();
        long long diff, sum = 0, posCount = 0;
        
        for(int i=0;i<n;i++){

            diff = nums2[i]-nums1[i];
            if(diff % k != 0)
                return -1;

            diff = diff / k;
            sum += diff;

            if(diff > 0)
                posCount += diff;

        }
        
        if(sum != 0)
            return -1;
        
        return posCount;
        
    }
};