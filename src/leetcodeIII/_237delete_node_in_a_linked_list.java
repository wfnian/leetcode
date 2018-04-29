package leetcodeIII;

public class _237delete_node_in_a_linked_list {
    public static void main(String[] args) {
        ListNode first = new ListNode(-1);
        ListNode head = first;
        ListNode last = first;
        int list [] = {1,2,3,4,5,6,7};
        for (int i = 0; i < list.length; i++) {
            last = new ListNode(list[i]);
            head.next = last;
            head = last;
        }
        for(ListNode node = first.next;node!=null;node = node.next)
            System.out.print(node.val+"->");
        System.out.println("NULL");

        Solution237 s = new Solution237();

        s.deleteNode(first.next);

        for(ListNode node = first.next;node!=null;node = node.next)
            System.out.print(node.val+"->");
        System.out.println("NULL");

    }
}
class Solution237 {
    public void deleteNode(ListNode node) {
        node.val = node.next.val;
        node.next = node.next.next;
    }
}
