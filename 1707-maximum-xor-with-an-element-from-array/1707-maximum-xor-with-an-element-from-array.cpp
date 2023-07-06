class Node {
public:
    vector<Node *> child;
    Node() {
        child.assign(2, NULL);
    }
};

class Trie {
public:
    Node *root;
    Trie() {
        root = new Node();
    }
    void insert(int n) {
        Node *t = root;
        for (int i = 31; i >= 0; --i) {
            bool bit = ((1 << i) & n);
            if (!t->child[bit])
                t->child[bit] = new Node();
            t = t->child[bit];
        }
    }
    int query(int x) {
        Node *t = root;
        int res = 0;
        for (int i = 31; i >= 0; --i) {
            int bit = (bool)((1 << i) & x);
            if (t->child[bit ^ 1]) {
                res |= (1 << i);
                t = t->child[bit ^ 1];
            } else {
                t = t->child[bit];
            }
        }
        return res;
    }
};

class Solution {
public:
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        int n = (int) queries.size();
        vector<int> ans(n, -1);
        
        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);     
        sort(idx.begin(), idx.end(), [&](int i, int j) {
            return queries[i][1] < queries[j][1];
        });
        
        sort(nums.begin(), nums.end());
        Trie t;
        int st = 0;
        for (int i = 0; i < n; ++i) {
            int x = queries[idx[i]][0];
            int m = queries[idx[i]][1];
            while (st < (int) nums.size() && nums[st] <= m) {
                t.insert(nums[st]);
                st++;
            }
            ans[idx[i]] = (st ? t.query(x) : -1);
        }
        return ans;
    }
};