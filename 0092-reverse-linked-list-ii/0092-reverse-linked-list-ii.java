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
    public ListNode reverseBetween(ListNode head, int left, int right) {
        if(head == null || head.next == null)
        return head;
    
            ListNode dummy = new ListNode(-1);
            dummy.next = head;

            //iterate until left
            ListNode currLeft = dummy;
            ListNode prevLeft = null;
            for(int i = 0; i < left; i++){
                prevLeft = currLeft;
                currLeft = currLeft.next;
            }

            //reverse until right
            ListNode currRight = currLeft;
            ListNode prevRight = prevLeft;
            for(int i = left; i <= right; i++){
                ListNode temp = currRight.next;
                currRight.next = prevRight;
                prevRight = currRight;
                currRight = temp;
            }

            //connect the left and right pointers appropriately
            prevLeft.next = prevRight;
            currLeft.next = currRight;

            return dummy.next;
        
    }
}