class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        unordered_map<long long, int> mp;
        for (int i = 0; i < n; i++)
            mp[stones[i]] = i;
        for (int i = n - 2; i >= 0; i--)
            if (check(stones[n - 1] - stones[i], n - 1, stones, mp))
                return true;
        return false;
    }

    set<pair<long long, int> > memo;
    bool check(long long k, int i, vector<int> &stones, unordered_map<long long, int> &mp) {
        if (memo.count({k, i}))
            return false;
        if (i == 1 and k == 1 and stones[1] == 1)
            return true;
        if (mp[stones[i] - k]) {
            int idx = mp[stones[i] - k];
            if (check(k, idx, stones, mp))
                return true;
            if (check(k + 1, idx, stones, mp))
                return true;
            if (k - 1 > 0 and check(k - 1, idx, stones, mp))
                return true;
        }
        memo.insert({k, i});
        return false;
    }
};