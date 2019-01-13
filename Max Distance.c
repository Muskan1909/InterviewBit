int max(int x,int y){
    return x>y?x:y;
}
int min(int x,int y){
    return x<y?x:y;
}
int maximumGap(const int* A, int n1) {
    /*int flag=1;
    int i;
    for(i=1;i<n1;i++){
        if(A[0]<=A[i]){
            flag=0;
            break;
        }
    }
    if(n1==1 || flag==1)
        return 0;*/
    
        int *Lmin=(int*)malloc(sizeof(int)*n1);
        int *Rmax=(int*)malloc(sizeof(int)*n1);
        int j,i;
        int maxDiff;
        Lmin[0]=A[0];
        for(i=1;i<n1;i++)
            Lmin[i]=min(A[i],Lmin[i-1]);
        Rmax[n1-1]=A[n1-1];
        for(i=n1-2;i>=0;i--)
            Rmax[i]=max(A[i],Rmax[i+1]);
        i=0,j=0,maxDiff=-1;
        while(i<n1 && j<n1){
            if(Lmin[i]<=Rmax[j]){
                maxDiff=max(maxDiff,j-i);
                j++;
            }
            else
                i++;
        }
        return maxDiff;
    
}
