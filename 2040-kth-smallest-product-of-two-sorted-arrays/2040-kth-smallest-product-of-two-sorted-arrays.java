class Solution {
    private static long countofProduct(int[] arr , int[] brr , long prod){
        long ans =0;
        for(int el:arr){
            if(el>=0){
                long c =0;
                int lo =0;
                int hi = brr.length-1;
                while(lo<=hi){
                    int mid = (lo+hi)/2;
                    if((long)(el)*brr[mid]<=prod){
                        c = mid+1;
                        lo = mid+1;
                    }else{
                        hi = mid-1;
                    }
                }
                ans+=c;
                
            }else{
                long c =0;
                int lo =0;
                int hi = brr.length-1;
                while(lo<=hi){
                    int mid = (lo+hi)/2;
                    if((long)(el)*brr[mid]<=prod){
                        c = brr.length-mid;
                        hi = mid-1;
                    }else{
                        lo = mid+1;
                    }
                }
                ans+=c;
            }
        }
        return ans;
    }
    public long kthSmallestProduct(int[] nums1, int[] nums2, long k) {
        long si = -1000_000_0000l;
        long ei = 1000_000_0000l;
        long ans =0;
        while(si<=ei){
            long mid = (si+ei)/2;
            if(countofProduct(nums1,nums2,mid)>=k){
                ans = mid;
                ei = mid-1;
            }else{
                si = mid+1;
            }
        }
        return ans;
    }
}