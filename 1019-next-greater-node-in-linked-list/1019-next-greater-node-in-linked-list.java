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
    public int[] nextLargerNodes(ListNode head) {
         if(head == null) return new int[]{};
        int count = 0;
        ListNode current = head;
        while(current != null) {
            count++;
            current = current.next;
        }

        int[] result = new int[count];
        Arrays.fill(result, 0);

        Stack<int[]> stack = new Stack<>();
        current = head;
        int position = 0;
        while(current != null) {

            while(!stack.isEmpty() && current.val > stack.peek()[1]) {
                int index = stack.pop()[0];
                result[index] = current.val;
            }
            stack.push(new int[]{position++, current.val});
            current = current.next;
        }

        return result;
        
        
    }
}