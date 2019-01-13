public class Solution {
    HashSet <Integer> h = new HashSet <Integer> ();
    public int colorful(int A) {
        String num = Integer.toString(A);
        int l = num.length();
        for(int i = 0; i < l; i++){
            for(int j = i; j < l ;j++){
                String sub = num.substring(i,j+1);
                int n = Integer.valueOf(sub);
                int mul = 1;
                for(int k = n; k !=0 ;k=k/10){
                    int d = k%10;
                    mul = d*mul;
                }
                if(h.contains(mul)){
                    return 0;
                }
                else{
                    h.add(mul);
                }
            }
        }
        return 1;
    }
}
