class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> map;
        
        for(int x:deck)
            map[x]++;
        
        int g = 0;
        
        for(auto x : map)
            g = gcd(g,x.second);
        
        return g >= 2;
    }
};