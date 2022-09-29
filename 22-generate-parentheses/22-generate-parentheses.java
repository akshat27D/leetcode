class Solution {
    public static void GenerateParenthesis(List<String> res,int n , int open , int close , String ans){
        if(open==n && close==n){
            res.add(ans);
        }
        if(open<n){
            GenerateParenthesis( res,n,open+1 , close , ans+"(");
        }
        if(close<open){
            GenerateParenthesis( res, n,open , close+1 , ans+")");
        }
    }
    public List<String> generateParenthesis(int n) {
        List<String> res = new ArrayList<String>();
        GenerateParenthesis(res,n,0,0,"");
        return res;
            
        
    }
}