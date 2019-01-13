/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Integer
 */
int coverPoints(int* A, int n1, int* B, int n2) {
    int i;
    for(i=0;i<n1;i++){
        a = A[i]-A[i+1];
        b = B[i]-B[i+1];
        a = abs(a);
        b = abs(b);
        
    }
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
