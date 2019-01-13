public class Solution {
    public ListNode mergeKLists(ArrayList<ListNode> a) {
        PriorityQueue <ListNode> minHeap = new PriorityQueue <ListNode> (10,new Comparator<ListNode>(){
            public int compare(ListNode x,ListNode y){
                return x.val - y.val;
            }
        });
        
        int n = a.size();
        ListNode head = null;
        ListNode tail = null;
        if(minHeap.isEmpty()){
            for(int i =0; i<n;i++)
                minHeap.add(a.get(i));
        }
        while(!minHeap.isEmpty()){
            ListNode top = minHeap.peek();
            minHeap.remove();
            
            if(top.next!=null){
                minHeap.add(top.next);
            }
            if(head == null){
                head = top;
                tail = top;
            }
            else{
                top.next = top;
                tail = top;
            }
        }
        return head;
    }
}
