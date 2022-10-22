class Solution {
    public void setZeroes(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        boolean[][] arr = new boolean[m][n];
        
        for(int row = 0; row < m; ++row){
            for(int col = 0; col < n; ++col){
                if(matrix[row][col] == 0)
                    arr[row][col] = true;
            }
        }
        
        for(int row = 0; row < m; ++row){
            for(int col = 0; col < n; ++col){
                if(arr[row][col] == true){
                    helperRow(matrix, row, n);
                    helperCol(matrix, col, m);
                }
            }
        }
    }
    
    public void helperRow(int[][] matrix, int row, int n){
        for(int col = 0; col < n; ++col)
            matrix[row][col] = 0;
    }
    
    public void helperCol(int[][] matrix, int col, int m){
        for(int row = 0; row < m; ++row)
            matrix[row][col] = 0;
    }
}