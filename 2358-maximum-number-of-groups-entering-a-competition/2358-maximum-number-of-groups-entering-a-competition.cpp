class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        int c =1;
        while((c*(c+1)/2)<=n) {
            c++;
        }
        return --c;
        
        
    }
};