public class Solution {
    public ArrayList<Integer> lszero(ArrayList<Integer> A) {
        HashMap <Integer,Integer> hm = new HashMap <Integer,Integer>();
        int sum = 0;
        int max_len = 0;
        int left = 0;
        int right = 0;
        for(int i = 0;i < A.size() ; i++){
            sum += A.get(i);
            if(A.get(i) == 0 && max_len == 0){
                max_len = 1;
                left = i;
                right = i;
            }
            if(sum == 0){
                max_len = i+1;
                left = 0;
                right = i;
            }
            if(hm.get(sum)!=null){
                int prev_i = hm.get(sum);
                //max_len = Math.max(max_len,i-prev_i);
                if(max_len<i-prev_i){
                    left = prev_i+1;
                    right = i;
                    max_len = i-prev_i;
                }
                if(max_len==prev_i){
                    left = left;
                    right = right;
                }
            }
            else{
                hm.put(sum,i);
            }
        }
        ArrayList <Integer> arr = new ArrayList <Integer>();
        for(int i =0;i<max_len;i++){
            arr.add(A.get(left));
            left++;
        }
        return arr;
    }
}
