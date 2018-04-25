package leetcodeIII;

//
//Given a linked list, remove the n-th node from the end of list and return its head.
//
//Example:
//
//Given linked list: 1->2->3->4->5, and n = 2.
//
//After removing the second node from the end, the linked list becomes 1->2->3->5.

public class _19remove_nth_node_from_end_of_list {
    public static void main(String[] args) {
        ListNode19 first = new ListNode19();
        first.val = -1;
        ListNode19 last = first;
        ListNode19 head = first;
        for (int i = 1; i < 5; i++) {   //创建链表
            last = head;
            head = new ListNode19();
            head.val = i;
            last.next = head;
        }
        for (ListNode19 node = first.next; node != null; node = node.next)//#打印链表
            System.out.print(node.val + "->");
        System.out.println("NULL");


        ListNode19 res = new Solution19().removeNthFromEnd(first.next, 2);

        for (ListNode19 node = res; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");

    }

}

class ListNode19 {
    int val;
    ListNode19 next;
}

class Solution19 {
    public ListNode19 removeNthFromEnd(ListNode19 head, int n) {
        int len = 0, i = 0;
        for (ListNode19 node = head; node != null; node = node.next)
            len++;

        if (n == len) {
            head = head.next;
            return head;
        } else if (n == 1) {
            for (ListNode19 node = head; node != null; node = node.next) {
                if (node.next.next == null) {
                    node.next = null;
                }
            }
            return head;
        } else {
            for (ListNode19 node = head; node != null; node = node.next) {
                i++;
                if (i == len - (n)) {
                    node.next = node.next.next;
                    break;
                }
            }
        }
        return head;
    }
}
