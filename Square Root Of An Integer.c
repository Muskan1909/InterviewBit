int Sqrt(int A) {
    int x=A;
    if (x == 0 || x == 1) 
       return x;

    int start = 0, end = x/2, ans;   
    while (start <= end) 
    {        
        long long mid = (start + end) / 2;
        
        if (mid*mid == x)
            return mid;
            
        if (mid*mid < x) 
        {
            start = mid + 1;
            ans = mid;
        } 
        else 
            end = mid - 1;        
    }
    return ans;
}
