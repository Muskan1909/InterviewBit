public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public ArrayList<Integer> twoSum(final List<Integer> A, int B) {
        HashMap<Integer,Integer> hm = new HashMap<Integer,Integer>();
        ArrayList <Integer> result = new ArrayList <Integer>();
        for(int i = 0; i < A.size() ;i++){
           if(hm.containsKey(B-A.get(i))){
               result.add(hm.get(B-A.get(i)));
               result.add(i+1);
               return result;
           }
           if(hm.containsKey(A.get(i)))
               continue;
           else
               hm.put(A.get(i),i+1); 
        }
        return result;
    }
}
