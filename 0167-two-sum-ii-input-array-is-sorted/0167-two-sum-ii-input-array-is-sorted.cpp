class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int>ans;
        int s = 0;
        int e = arr.size() - 1;

        while(s < e){
            if(arr[s] + arr[e] > target){
                e--;
            }
            else if(arr[s] + arr[e] < target){
                s++;
            }
            else{
                ans.push_back(s + 1);
                ans.push_back(e + 1);
                break;
            }
        }
        return ans;
        
        
    }
};