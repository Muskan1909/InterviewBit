int getSum(int* C,int n){
    int i;
    int sum=0;
    for(i=0;i<n;i++)
        sum+=C[i];
    return sum;
}

int getMax(int* C,int n){
    int i;
    int max=C[0];
    for(i=0;i<n;i++){
        if(C[i]>max)
            max=C[i];
    }
    return max;
}
 
int noOfPainters(int* C,int n,int maxLen){
    int i,total=0;
    int painters = 1;
    for(i=0;i<n;i++){
        total+=C[i];
        if(total>maxLen){
            total=C[i];
            painters++;
        }
    }
    return painters;
}

int paint(int A, int B, int* C, int n3) {
    int low = getMax(C,n3);
    int high = getSum(C,n3);
    
    while(low<high){
        int mid = low+(high-low)/2;
        int reqdPainters = noOfPainters(C,n3,mid);
        if(reqdPainters<=A){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return (low*B)%10000003;
}
