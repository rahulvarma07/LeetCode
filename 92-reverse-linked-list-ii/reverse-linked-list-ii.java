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
    public ListNode reverse(ListNode head){
        if(head == null) return null;
        ListNode pres = head;
        ListNode prev = null;
        while(pres != null){
            ListNode curr = pres.next;
            pres.next = prev;
            prev = pres;
            pres = curr;
        }
        return prev;
    }
    
    public ListNode reverseBetween(ListNode head, int left, int right) {
        int pos = 1;
        ListNode prev = null;
        ListNode tempOne = null;
        ListNode tempTwo = null;
        ListNode temp = head;
        while(temp != null){
            if(pos == left){
                tempOne = prev;
                tempTwo = temp;
            }
            else if(pos == right){
                ListNode curr = temp.next;
                temp.next = null;
                ListNode node = reverse(tempTwo);
                if(tempOne == null){
                    head = node;
                }
                else tempOne.next = node;
                tempTwo.next = curr;
                break;
            }
            pos++;
            prev = temp;
            temp = temp.next;
        }
        return head;
    }
}