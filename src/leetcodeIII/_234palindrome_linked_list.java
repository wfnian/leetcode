package leetcodeIII;

import java.util.ArrayList;

public class _234palindrome_linked_list {
    public static void main(String[] args) {
        int[] list = {1, 2, 3, 2, 1};
        ListNode first = new ListNode(-1);
        ListNode head = first;
        ListNode last;
        for (int var : list) {
            last = new ListNode(var);
            head.next = last;
            head = last;
        }

        System.out.println(new Solution234().isPalindrome(first.next));
    }
}
class Solution234 {
    public boolean isPalindrome(ListNode head) {
        ArrayList<Integer> list = new ArrayList<>();
        for (ListNode node = head; node != null; node = node.next)
            list.add(node.val);
        System.out.println(head.val);
        ListNode reversed = reverseList(head);
        int index=0;
        while (reversed!=null){
            if (list.get(index)!=reversed.val)
                return false;
            index++;
            reversed = reversed.next;
        }
        return true;
    }
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
