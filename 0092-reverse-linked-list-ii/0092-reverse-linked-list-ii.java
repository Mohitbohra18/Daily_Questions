class Solution {
    public ListNode reverseBetween(ListNode head, int left, int right) {

        // Dummy node handles the case where left = 1
        ListNode dummy = new ListNode(0);
        dummy.next = head;

        // Move prev to the node before the reversal starts
        ListNode prev = dummy;

        for (int i = 1; i < left; i++) {
            prev = prev.next;
        }

        // First node of the section being reversed
        ListNode current = prev.next;

        // Move each next node to the front of the reversed section
        for (int i = 0; i < right - left; i++) {

            ListNode next = current.next;

            // Remove next from its current position
            current.next = next.next;

            // Insert next immediately after prev
            next.next = prev.next;
            prev.next = next;
        }

        return dummy.next;
    }
}