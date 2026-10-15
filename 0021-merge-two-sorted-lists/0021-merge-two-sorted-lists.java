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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {

        //method 1
        // if(list1==null || list2==null){
        //     return list1==null? list2:list1;
        // }

        // if(list1.val <= list2.val){
        //     list1.next=mergeTwoLists(list1.next,list2);
        //     return list1;
        // }
        // else{
        //     list2.next=mergeTwoLists(list1,list2.next);
        //     return list2;
        // }

        //method 2

        ListNode dummy=new ListNode(-1);
        ListNode temp=dummy;

        while(list1!=null && list2!=null){
            if(list1.val<=list2.val){
                temp.next=list1;
                list1=list1.next;
            }
            else{
                temp.next=list2;
                list2=list2.next;
            }

            temp=temp.next;
        }
        temp.next=(list1!=null)?list1:list2;

        return dummy.next;


    }
}