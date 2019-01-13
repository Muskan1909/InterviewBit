/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
int cpFact(int A, int B) {
    int x=gcd(A,B);
    while(x!=1){
        A=A/x;
        x=gcd(A,B);
    }
    return A;
}
    /*int i,div[A];
    int j=0,ans,t;
    for(i=2;i<=A;i++){
        if(A%i==0){
          div[j]=i;
          j++;
        }
    }
    for(i=0;i<j;i++){
        t=div[i];
        ans=gcd(B,t);
        if(ans==1){
            return t;
            break;
        }
        else
        {
            continue;
        }
    }
}*/
int gcd(int A,int B){
    if(B==0){
        return A;
    }
    else
        return gcd(B,A%B);
}
    
