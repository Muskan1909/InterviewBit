void rotate(int** A, int n11, int n12) {
    int i,j,temp;
    for(i=0;i<n11;i++){
        for(j=0;j<n12;j++){
            if(i<j){
                temp=A[i][j];
                A[i][j]=A[j][i];
                A[j][i]=temp;
            }
        }
    }
    int s,e;
    for(i=0;i<n11;i++){
        s=0;
        e=n11-1;
        while(s<=e){
            temp=A[i][s];
            A[i][s]=A[i][e];
            A[i][e]=temp;
            s++;
            e--;
        }
    }
}
