int* plusOne(int* A, int n1, int *len1) {
    int len=n1;
    int carry = 1;
    int i,j;
    int length = 0;
    int temp;
    
    int* result = (int*)malloc(sizeof(int)*(len+1));
    for(i=n1-1;i>=0;i--){
        j=A[i]+carry;
        carry = 0;
        if(j>9){
            carry=1;
            j=j%10;
        }
        result[length++]=j;
    }
    if(carry==1){
        result[length++]=1;
    }
    for(i=0,j=length-1;i<=j;i++,j--){
        temp = result[i];
        result[i]=result[j];
        result[j]=temp;
    }
    for(i=0;i<length;i++){
        if(result[i]!=0){
            break;
        }
    }
    *len1 = length-i;
    result = result+i;
    
    return result;
    
}
