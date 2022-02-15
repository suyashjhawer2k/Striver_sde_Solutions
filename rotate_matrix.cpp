void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size() ;
        
        int col = matrix[0].size() ;
       
        
        for(int j=0 ; j<col ; j++)
        {
          
            for(int i=0 ; i<(row/2) ; i++)
            {
                swap(matrix[i][j] , matrix[row-1-i][j]) ;
            }
        }
        
        for(int i=0 ; i<row ; i++)
        {
            for(int j=0 ; j<i ; j++)
            {
                swap(matrix[i][j] , matrix[j][i]) ;
            }
        }
    }
