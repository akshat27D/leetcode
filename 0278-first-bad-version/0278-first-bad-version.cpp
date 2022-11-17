// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1;
        int end=n;
        int ans=0;
        while(start<=end){
            int mid=(end-start)/2+start;
            bool temp=isBadVersion(mid);
            if(temp==false){
                start=mid+1;
                
            }
            else if(temp==true){
                bool temp1=isBadVersion(mid-1);
                    if(temp1==false){
                        return mid;
                }
                end=mid-1;  
            }
            ans=mid;
        }
        return ans;
        
    }
};