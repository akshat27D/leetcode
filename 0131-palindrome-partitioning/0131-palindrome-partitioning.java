class Solution {
    public static boolean ispalindrome(String s){
        int i=0;
        int j =s.length()-1;
        while(i<=j){
            if(s.charAt(i)!=s.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    public static void Partioning(String ques , List<String> list, List<List<String>> ans){
        if(ques.length()==0){
//            System.out.println(list);

            ans.add(new ArrayList<>(list));
            return;
        }
        for(int cut=1;cut<=ques.length();cut++){
            String s = ques.substring(0,cut);
            if(ispalindrome(s)){
                list.add(s);
                Partioning(ques.substring(cut),list,ans);
                list.remove(list.size()-1);
            }
        }
    }
    public List<List<String>> partition(String s) {
        String str = s;
        List<String> list = new ArrayList<>();
        List<List<String>> ans = new ArrayList<>();
        Partioning(str,list,ans);
        return ans;
        
    }
}