public class Solution {
    public ArrayList<Integer> dNums(ArrayList<Integer> A, int B) {
        HashMap<Integer,Integer> hm = new HashMap<Integer,Integer>();
        ArrayList<Integer> arr = new ArrayList<Integer>();
        int dist_count = 0;
        for(int i = 0;i < B;i++){
            if(hm.get(A.get(i)) == null){
                hm.put(A.get(i),1);
                dist_count++;
            }
            else{
                int count = hm.get(A.get(i));
                hm.put(A.get(i),count+1);
            }
        }
        arr.add(dist_count);
        for(int i = B; i < A.size(); i++){
            if(hm.get(A.get(i-B)) == 1){   //if count is 1 that means it was only available once in that window at
                hm.remove(A.get(i-B));    //at start of window, so it will not be counted in next window, so dist_count--;
                dist_count--;
            }
            else{
                int count = hm.get(A.get(i-B)); //but if its count>1, it will be counted in next window 
                hm.put(A.get(i-B),count-1); //so subtracting 1 from count (this 1 was of previous window which is now not a part of next window)
            }
            if(hm.get(A.get(i)) == null){
                hm.put(A.get(i),1);
                dist_count++;
            }
            else{
                int count = hm.get(A.get(i));
                hm.put(A.get(i),count+1);
            }
            arr.add(dist_count);
        }
        return arr;
    }
}
