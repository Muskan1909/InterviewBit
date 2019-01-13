int searchMatrix(int** A, int n11, int n12, int B) {
    int i,s,e,m;
    for(i=0;i<n11;i++){
        s=0;
        e=n12-1;
        while(s<=e){
            m=(s+e)/2;
            if(A[i][m]==B)
                return 1;
            else if(A[i][m]>B)
                e=m-1;
            else
                s=m+1;
        }
    }
    return 0;
}
