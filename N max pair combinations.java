public class Solution {
    public ArrayList<Integer> solve(ArrayList<Integer> A, ArrayList<Integer> B) {
        A.sort(Collections.reverseOrder());
        B.sort(Collections.reverseOrder());
        
        int n = A.size();
        
        PriorityQueue <Integer> maxHeap = new PriorityQueue <Integer> ();
        
        for(int i =0 ;i < n;i++){
            for(int j = 0;j < n;j++){
                if(maxHeap.size() < A.size()){
                    maxHeap.add(A.get(i)+B.get(j));
                }
                else if(A.get(i) + B.get(j) > maxHeap.peek()){
                        maxHeap.remove();
                        maxHeap.add(A.get(i) + B.get(j));
                }
                else{
                    break;
                }
            }
        }
        
        ArrayList <Integer> result = new ArrayList <> ();
        for(int k = 0;k <A.size();k++){
            result.add(0,maxHeap.poll());
        }
        
        return result;
    }
}
