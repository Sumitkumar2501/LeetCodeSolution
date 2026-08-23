/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    static int getLength(ListNode head){
        int length=0;

        while(head!=null){
            length++;
            head=head.next;
        }
        return length;
    }
    public ListNode middleNode(ListNode head) {
        int len=getLength(head);

        int midIdx=len/2;
        while(midIdx>0){
            head=head.next;
            midIdx--;
        }
        return head;
    }
}