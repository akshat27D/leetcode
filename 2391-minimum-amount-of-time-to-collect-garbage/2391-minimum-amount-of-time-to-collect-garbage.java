class Solution {
    public int garbageCollection(String[] garbage, int[] travel) {
        int n = garbage.length;
        int maxG = 0;
        int maxP = 0;
        int maxM = 0;
        int total = 0;
        
        for (int i = 0; i < n; i++) {
            String str = garbage[i];
            int m = str.length();
            for (int j = 0; j < m; j++) {
                char c = str.charAt(j);
                if (c == 'G') {
                    maxG = i;
                }
                else if (c == 'P') {
                    maxP = i;
                }
                else if (c == 'M') {
                    maxM = i;
                }
                total++;
            }
        }
        for (int i = 1; i < travel.length; i++) {
            travel[i] += travel[i - 1];   
        }
        if (maxG > 0) {
            total += travel[maxG - 1];
        }
        if (maxP > 0) {
            total += travel[maxP - 1];
        }
        if (maxM > 0) {
            total += travel[maxM - 1];
        }
        return total;
    }
        
    
}