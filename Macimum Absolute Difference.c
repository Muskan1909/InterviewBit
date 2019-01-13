/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
#include<limits.h>
int maxArr(int* A, int n1){
    int max1=INT_MIN;
    int max2=INT_MIN;
    int min1=INT_MAX;
    int min2=INT_MAX;
    int i;
    for(i=0;i<n1;i++){
        max1=max(max1,A[i]+i);
        min1=min(min1,A[i]+i);
        max2=max(max2,A[i]-i);
        min2=min(min2,A[i]-i);
    }
    //printf("%d%d%d%d\n",max1,min1,max2,min2);
    int m1=max1-min1;
    int m2=max2-min2;
    int m3=max(m1,m2);
    return m3;
}
int max(int x,int y){
    if(x>=y)
        return x;
        
    else if(x<y)
        return y;
}
int min(int x,int y){
    if(x<=y)
        return x;
        
    else if(x>y)
        return y;
}
