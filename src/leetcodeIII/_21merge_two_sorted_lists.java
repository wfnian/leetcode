package leetcodeIII;

public class _21merge_two_sorted_lists {
    public static void main(String[] args) {
        int[] list1 = {1, 2, 4};
        int[] list2 = {5, 6, 7};
        //[1,2,4]
        //[5,6,7]

        ListNode first1 = new ListNode(-1);
        ListNode first2 = new ListNode(-1);

        ListNode last1 = first1, last2 = first2;
        ListNode head1, head2;

        for (int i = 0; i < list1.length; i++) {
            head1 = new ListNode(list1[i]);
            last1.next = head1;
            last1 = head1;
        }
        for (int i = 0; i < list2.length; i++) {
            head2 = new ListNode(list2[i]);
            last2.next = head2;
            last2 = head2;
        }

        for (ListNode node = first1.next; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");
        for (ListNode node = first2.next; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");

        ListNode merged = new Solution21().mergeTwoLists(first1.next, first2.next);

        for (ListNode node = merged; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");
    }
}

class Solution21 {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode first = new ListNode(-1); // 厉害厉害
        ListNode tail = first;
        while (l1 != null && l2 != null) {
            if (l1.val <= l2.val) {
                tail.next = l1;
                l1 = l1.next;
            } else {
                tail.next = l2;
                l2 = l2.next;
            }
            tail = tail.next;
        }
        if (l1 == null) tail.next = l2;
        if (l2 == null) tail.next = l1;
        return first.next;
    }
}