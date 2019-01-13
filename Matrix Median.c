/**
 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer
 */
int comp(const void *x,const void *y){
    return *(int*)x-*(int*)y;
}
int upperbound(int *arr,int n,int k){
    int s=0,ans;
    int e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==k){
            ans=m;
            s=m+1;
        }
        else if(arr[m]>k)
            e=m-1;
        else
            s=m+1;
    }
    return ans;
}
int findMedian(int** A, int n11, int n12) {
    int i,j;
    /*int k=0;
    int *arr=(int*)malloc(sizeof(int)*(n11*n12));
    for(i=0;i<n11;i++){
        for(j=0;j<n12;j++){
            arr[k]=A[i][j];
            k++;
        }
    }
    qsort(arr,n11*n12,sizeof(int),comp);
    int s=0;
    int e=k-1;
    int m=(s+e)/2;
    int median=arr[m];
    return median;*/
    int min=INT_MAX;
    int max=INT_MIN;
    for(i=0;i<n11;i++){
        if(A[i][0]<min)
            min=A[i][0];
        if(A[i][n12-1]>max)
            max=A[i][n12-1];
    }
    int d=((n11*n12)+1)/2;
    while(min<max){
         int mid=(min+max)/2;
         int count=0;
         for(i=0;i<n11;i++)
         count+=upperbound(*(A+i),A[i]+n12,mid)-A[i];
         if(count<d)
            min=mid+1;
         else
            max=mid;
    }
    return min;
}
