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
    public ListNode middleNode(ListNode head) {
        ListNode trav;

        if(head.next==null)
            return head;

        trav=head.next.next;

        while(trav!=null){
           
            if(trav.next==null)
                break;

            head=head.next;
            trav=trav.next.next;
        } 
        
    return head.next;
    }
}