class Solution {
public:
//     int solve(vector<int>& days, vector<int>& costs , int index){
//         int n = days.size();
//         if(index>=n) return 0;
//         int op1 = costs[0] + solve(days,costs,index+1);
//         for(int i = index ; i<n && days[i]<days[index] + 7 ; i++ )
        
//         int op2 = costs[1] + solve(days,costs,index);
//         for(int i = index ; i<n && days[i]<days[index] + 30 ; i++ )
        
        
        
//         int op3 = costs[2] + solve(days,costs,index);
//         return min(op1,min(op2,op3));
//     }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int lastDay = days[days.size() - 1];
        vector<int> dp(lastDay + 1, 0);
        
        int i = 0;
        for (int day = 1; day <= lastDay; day++) {
            if (day < days[i]) {
                dp[day] = dp[day - 1];
            } else {
                i++;
                dp[day] = min({dp[day - 1] + costs[0],
                               dp[max(0, day - 7)] + costs[1],
                               dp[max(0, day - 30)] + costs[2]});
            }
        }
     
        return dp[lastDay];
        
    }
};