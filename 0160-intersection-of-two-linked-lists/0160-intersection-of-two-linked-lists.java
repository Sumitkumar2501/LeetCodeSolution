/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode temp1 = headA;
    ListNode temp2 = headB;

    while (temp1 != temp2) {
        temp1 = (temp1 == null) ? headB : temp1.next;
        temp2 = (temp2 == null) ? headA : temp2.next;
    }

    return temp1;
        // ListNode temp1=headA;
        // ListNode temp2=headB;

        // while(temp1 != null && temp2 != null){
        //     temp1=temp1.next;
        //     temp2=temp2.next;
        // }

        // int count1=0;
        // while(temp1!=null){
        //     count1++;
        //     temp1=temp1.next;
        // }
        // int count2=0;
        // while(temp2!=null){
        //     count2++;
        //     temp2=temp2.next;
        // }
        // temp1=headA;
        // temp2=headB;

        // if(count1!=0){
        //     while(count1>0){
        //         temp1=temp1.next;
        //         count1--;
        //     }
        // }
        // if(count2!=0){
        //     while(count2>0){
        //         temp2=temp2.next;
        //         count2--;
        //     }
        // }
        // ListNode Node=null;
        // while(temp1!=null && temp2!=null){
        //     if(temp1==temp2){
        //         return temp1;
        //     }
        //     temp1=temp1.next;
        //     temp2=temp2.next;
        // }
        // return Node;
    }
}