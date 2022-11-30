class Solution {
    public static int largestRectangleArea(int[] arr){
        Stack<Integer> st = new Stack<>();
        int maxarea=0;
        for(int i=0;i<arr.length;i++){
            while(!st.isEmpty() && arr[i]<arr[st.peek()]){
                int h = arr[st.pop()];
                int r = i;
                if(st.isEmpty()){
                    maxarea  = Math.max(maxarea,h*r);
                }else{
                    int l = st.peek();
                    maxarea = Math.max(maxarea , h*(r-l-1));
                }
            }
            st.push(i);
        }
        int r = arr.length;
        while(!st.isEmpty()){
            int h = arr[st.pop()];
            if(st.isEmpty()){
                maxarea  = Math.max(maxarea,h*r);
            }else{
                int l = st.peek();
                maxarea = Math.max(maxarea , h*(r-l-1));
            }
        }
        return maxarea;
    }
}