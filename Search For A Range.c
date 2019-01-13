int lowerbound(const int *a,int n,int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    int m;
    while(s<=e){
         m=(s+e)/2;
        if(a[m]==k){
            ans=m;
            e=m-1;
        }
        else if(a[m]>k){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return ans;
}
int upperbound(const int *a,int n,int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    int m;
    while(s<=e){
         m=(s+e)/2;
        if(a[m]==k){
            ans=m;
            s=m+1;
        }
        else if(a[m]>k){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return ans;
}
int* searchRange(const int* A, int n1, int B, int *len1) {
    //int s=0,e=n1-1;
    int l=lowerbound(A,n1,B);
    int u=upperbound(A,n1,B);
    //printf("%d %d",l,u);
    int *arr=(int*)malloc(sizeof(int)*2);
    arr[0]=l;
    arr[1]=u;
    *len1=2;
    return arr;
}
