void Solution::setZeroes(vector<vector<int> > &A) {
    int c = 0, r = 0;
    int n = A.size();
    int m = A[0].size();
    for(int i = 0; i < n ; i++){
        if(A[i][0] == 0){
            r = 1;
            break;
        }
    }
    for(int i = 0; i < m ; i++){
        if(A[0][i] == 0){
            c = 1;
            break;
        }
    }
    for(int i = 1; i < n ; i++){
       for(int j = 1; j < m ; j++){
            if(A[i][j] == 0){
                A[i][0] = 0;
            }     
        } 
    }
    for(int i = 1; i < m ; i++){
       for(int j = 1; j < n ; j++){
            if(A[j][i] == 0){
                A[0][i] = 0;
            }     
        } 
    }
    
    for(int i = 1; i < n ; i++){
       for(int j = 1; j < m ; j++){
           if(A[i][0] ==0 || A[0][j] == 0){
               A[i][j] =0;
           }
        } 
    }
    if(c == 1){
        for(int i = 0; i < m ; i++){
            A[0][i] = 0;
        }
    }
    if(r == 1){
        for(int i = 0; i < n ; i++){
            A[i][0] = 0;
        }
    }
}
