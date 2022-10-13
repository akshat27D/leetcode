class Solution {
    public static int  tile_Possiblity(int[] freq , String ans){
        //System.out.println(ans);
        int count=0;
        for(int i=0;i<freq.length;i++){
            if(freq[i]>=1){
                char ch = (char)(i+'A');
                freq[i]--;
                count += tile_Possiblity(freq,ans+ch)+1;
                freq[i]++;
            }
        }
        return count;

    }
    public int numTilePossibilities(String tiles) {
         String str = tiles;
        int[] freq = new int[26];
        for(int i=0;i<str.length();i++){
            int idx = str.charAt(i)-'A';
            freq[idx]++;
        }
        int result= tile_Possiblity(freq," ");
        return result;
        
    }
}