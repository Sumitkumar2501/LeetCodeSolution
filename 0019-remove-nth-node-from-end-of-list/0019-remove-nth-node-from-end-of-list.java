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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode temp1=head;
        ListNode temp2=head;
        int len=0;
        while(temp1!=null){
            len++;
            temp1=temp1.next;
        }
        int n1=len-n;
        if(n1==0) return head.next;

        else{
            while(n1>1){
                temp2=temp2.next;
                n1--;
            }
            temp2.next=temp2.next.next;
        }
        return head;
    }
}