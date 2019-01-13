int getMax(int arr[], int n) 
{ 
    int max = INT_MIN; 
    int i;
    for (i = 0; i < n; i++)  
        if (arr[i] > max) 
            max = arr[i];  
    return max; 
} 
int getSum(int arr[], int n) 
{ 
    int total = 0;
    int i;
    for (i = 0; i < n; i++) 

        total += arr[i]; 
    return total; 
} 
int numberOfPainters(int arr[], int n, int maxLen) 
{ 
    int total = 0, numPainters = 1; 
   int i;
    for (i = 0; i < n; i++) { 
        total += arr[i]; 
  
        if (total > maxLen) { 
            total = arr[i]; 
            numPainters++; 
        } 
    } 
  
    return numPainters; 
} 
int books(int* A, int n3, int B) {
    if(n3<B){
        return -1;
    }
    long long int  lo = getMax(A, n3); 
    long long int  hi = getSum(A, n3); 
     while (lo < hi) { 
        long long int mid = lo + (hi - lo) / 2; 
        int requiredPainters = numberOfPainters(A, n3, mid); 
        if (requiredPainters <=B) 
            hi = mid; 
        else
            lo = mid + 1; 
    } 
    return lo; 
}
