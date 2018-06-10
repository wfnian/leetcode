package leetcodeIII;

import java.util.ArrayList;

public class _206reverse_linked_list {
    public static void main(String[] args) {
        int[] list = {1, 2, 3, 4, 5};
        ListNode first = new ListNode(-1);
        ListNode head = first;
        ListNode last;
        for (int var : list) {
            last = new ListNode(var);
            head.next = last;
            head = last;
        }

        for (ListNode node = first.next; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");
        //Solution:
        ListNode reversed = new Solution206().reverseList(first.next);

        for (ListNode node = reversed; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");


    }
}

class Solution206 {
    public ListNode reverseList(ListNode head) {
        ArrayList<Integer> list = new ArrayList<>();
        for (ListNode node = head; node != null; node = node.next)
            list.add(node.val);
        /* 直接修改数值就可以 */
        ListNode heads = head;
        for (int i = list.size() - 1; i >= 0; i--) {
            heads.val = list.get(i);
            heads = heads.next;
        }
        return head;
    }
}