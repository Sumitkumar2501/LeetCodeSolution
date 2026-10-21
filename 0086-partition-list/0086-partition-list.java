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
    public ListNode partition(ListNode head, int x) {
        ListNode small = new ListNode();
        ListNode big= new ListNode();

        ListNode temp1=small;
        ListNode temp2=big;

        while(head!=null){
            if(head.val<x){
                temp1.next=head;
                temp1=temp1.next;
            }
            else{
                temp2.next=head;
                temp2=temp2.next;
            }

            head=head.next;
        }

        temp2.next=null;
        temp1.next=big.next;

        return small.next;
    }
}