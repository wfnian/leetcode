package leetcodeIII;

public class _2add_two_numbers {
    public static void main(String[] args) {
        //创建链表
        ListNode first = new ListNode(-1);
        ListNode head = first;
        ListNode last;
        int[] list1 = {2, 4};
        int[] list2 = {2, 4, 3};
        for (int aList1 : list1) {
            last = new ListNode(aList1);
            head.next = last;
            head = last;
        }
        for (ListNode node = first.next; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");
        ListNode first2 = new ListNode(-1);
        ListNode head2 = first2;
        ListNode last2;
        for (int aList2 : list2) {
            last2 = new ListNode(aList2);
            head2.next = last2;
            head2 = last2;
        }
        for (ListNode node = first2.next; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");
        //以上 创建链表，测试链表。

        Solution2_ solution2 = new Solution2_();
        solution2.addTwoNumbers(first.next, first2.next);
    }
}

class Solution2_ {
    /**
     * You are given two non-empty linked lists representing two
     * non-negative integers. The digits are stored in reverse
     * order and each of their nodes contain a single digit. Add
     * the two numbers and return it as a linked list.
     * <p>
     * EXAMPLE:
     * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
     * Output: 7 -> 0 -> 8
     * Explanation: 342 + 465 = 807.
     */
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode res = new ListNode(-1);
        ListNode head = res;
        ListNode last;
        int extra = 0;
        while (l1 != null && l2 != null) {
            last = new ListNode((l1.val + l2.val + extra) % 10);
            extra = (l1.val + l2.val + extra) / 10;
            head.next = last;
            head = head.next;
            l1 = l1.next;
            l2 = l2.next;
        }
        if (l1 == null)
            while (l2 != null) {
                last = new ListNode((l2.val + extra) % 10);
                extra = (l2.val + extra) / 10;
                head.next = last;
                head = head.next;
                l2 = l2.next;
            }
        if (l2 == null)
            while (l1 != null) {
                last = new ListNode((l1.val + extra) % 10);
                extra = (l1.val + extra) / 10;
                head.next = last;
                head = head.next;
                l1 = l1.next;
            }
        if (extra != 0)
            head.next = new ListNode(extra);

        for (ListNode node = res.next; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");
        return res.next;
    }
}