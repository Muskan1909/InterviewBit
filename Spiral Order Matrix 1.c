int* spiralOrder(const int** A, int n11, int n12, int *len1) {
   //len1=n11*n12;
   int *arr=(int*)malloc(sizeof(int)*(n11*n12));
   int i;//iterator
   int k=0;//starting row index
   int m=n11;//ending row index
   int l=0;//starting column index
   int n=n12;//ending column index
   int j=0;
   while(k<m && l<n){
       for(i=l;i<n;i++){
           arr[j]=A[k][i];
           j++;
       }
       k++;
       for(i=k;i<m;i++){
           arr[j]=A[i][n-1];
           j++;
       }
       n--;
       if(k<m){
           for(i=n-1;i>=l;i--){
               arr[j]=A[m-1][i];
               j++;
           }
           m--;
       }
       if(l<n){
           for(i=m-1;i>=k;i--){
               arr[j]=A[i][l];
               j++;
           }
           l++;
       }
   }
   *len1=n11*n12;
   return arr;
}
