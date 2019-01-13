/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
 int comp(const void* x,const void* y){
     return *(int*)x-*(int*)y;
 }
int findMinXor(int* A, int n1) {
    
    qsort(A,n1,sizeof(int),comp);
    int minxor=INT_MAX;
    int val=0,i;
    for(i=0;i<n1-1;i++){
        val=A[i]^A[i+1];
        minxor=min(minxor,val);
    }
    return minxor;
}
int min(int x,int y){
    if(x<=y)
      return x;
    else
      return y;
}
