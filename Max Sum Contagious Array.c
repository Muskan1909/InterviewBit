int maxSubArray(const int* A, int n1) {
    int max_ending=0;
    int max_so_far=INT_MIN;
    int i;
    for(i=0;i<n1;i++){
        max_ending=max_ending+A[i];
        if(max_so_far<max_ending){
            max_so_far= max_ending;
        }
        if(max_ending<0){
            max_ending=0;
        }
    }
    return max_so_far;
}
