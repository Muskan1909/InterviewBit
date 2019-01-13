public class Solution {
    class Node{
        int key;
        int value;
        Node prev;
        Node next;
        
        Node(int key,int value){
            this.key = key;
            this.value = value;
        }
    }
    
    int capacity;
    HashMap <Integer,Node> hm = new HashMap <Integer,Node>();
    Node head = null;
    Node tail = null;
    
    public Solution(int capacity) {
        this.capacity = capacity;
    }
    
    public int get(int key) {
        if(hm.containsKey(key)){
            Node temp = hm.get(key);
            remove(temp);
            setHead(temp);
            return temp.value;
        }
         return -1;
    }
    
    public void set(int key, int value) {
        if(hm.containsKey(key)){
            Node old = hm.get(key);
            old.value = value;
            remove(old);
            setHead(old);
        }
        else{
            Node nn = new Node(key,value);
            if(hm.size()<capacity){
                setHead(nn);
            }
            else{
                hm.remove(tail.key);
                remove(tail);
                setHead(nn);
            }
            hm.put(key,nn);
        }
    }
    public void remove(Node temp) {
        if (temp.prev != null) {
            temp.prev.next = temp.next;
        } else {
            head = temp.next;
        }
        if (temp.next != null) {
            temp.next.prev = temp.prev;
        } else {
            tail = temp.prev;
        }
    }
 
    public void setHead(Node temp) {
        temp.next = head;
        temp.prev = null;
        if (head != null)
            head.prev = temp;
        head = temp;
        if (tail == null)
            tail = head;
    }
}

