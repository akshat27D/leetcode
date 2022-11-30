class Solution {
    public static String smallestNumber(String s){
        int[] ans = new int[s.length()+1];
        int count=1;
        Stack<Integer> st = new Stack<>(); 
        for(int i=0;i<=s.length();i++){
            if(i==s.length() || s.charAt(i)=='I'){
                ans[i] = count++;
                while(!st.isEmpty()){
                    ans[st.pop()]=count++;
                }
                
            }else{
                st.push(i);
            }
            
        }
        String str="";
        for(int val:ans){
            str+=val;
        }
        return str;
    }
    
}