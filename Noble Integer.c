/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int comp(const void *x,const void *y){
    return *(int*)x-*(int*)y;
}
int solve(int* A, int n1) {
    qsort(A,n1,sizeof(int),comp);
    int i;
    for(i=0;i<n1-1;i++){
        if(A[i]==A[i+1])
            continue;
        if(A[i]==n1-i-1)
            return 1;
    }
    if(A[n1-1]==0)
        return 1;
    return -1;
}
