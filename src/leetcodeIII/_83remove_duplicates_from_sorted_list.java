package leetcodeIII;

//
//Given a sorted linked list, delete all duplicates such that each element appear only once.
//
//Example 1:
//
//Input: 1->1->2
//Output: 1->2
//
//
public class _83remove_duplicates_from_sorted_list {
    public static void main(String[] args) {
        ListNode first = new ListNode(-1);
        ListNode last = first;
        ListNode head = first;
        int list[] = {};
        for (int i = 0; i < list.length; i++) {  //创建链表
            head = new ListNode(list[i]);
            last.next = head;
            last = head;
        }
        for (ListNode node = first.next; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");

        ListNode listNode83 = new Solution83().deleteDuplicates(first.next);

        for (ListNode node = listNode83; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");
    }
}
class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
    }
}
class Solution83 {
    public ListNode deleteDuplicates(ListNode head) {
        int ans = 0;
        if (head == null || head.next == null)
            return head;
        while (true) {
            for (ListNode node = head; node.next.next != null && node.next != null; node = node.next) {
                if (node.val == node.next.val) {
                    node.next = node.next.next;
                    ans = 1;
                    break;
                }
            }
            if (ans == 0) break;//一边扫下来没有发生改变，则说明没有重复了；
            else ans = 0;     //否则重新计数；
        }
        for (ListNode node = head; node.next != null; node = node.next)
            if (node.val == node.next.val) {
                node.next = null;
                break;
            }
        return head;
    }
}
//class Solution {   //more effective 更有效率
//    public ListNode deleteDuplicates(ListNode head) {
//        ListNode temp=head;
//        if(temp==null)
//            return head;
//        int data=temp.val;
//        while(temp.next!=null){
//            if(temp.next.val==data){
//                temp.next=temp.next.next;
//            }
//            else{
//                data=temp.next.val;
//                temp=temp.next;
//            }
//        }
//        return head;
//    }
//}