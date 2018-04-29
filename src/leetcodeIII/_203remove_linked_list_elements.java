package leetcodeIII;

//
//Remove all elements from a linked list of integers that have value val.
//
//Example:
//
//Input:  1->2->6->3->4->5->6, val = 6
//Output: 1->2->3->4->5
//
public class _203remove_linked_list_elements {
    public static void main(String[] args) {
        int list[] = {3, 2, 1, 1};
        ListNode first = new ListNode(-1);
        ListNode head = first;
        ListNode last;
        for (int i = 0; i < list.length; i++) {
            last = new ListNode(list[i]);
            head.next = last;
            head = last;
        }
        for (ListNode node = first.next; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");
        ListNode ans = new Solution203().removeElements(first.next, 1);
        for (ListNode node = ans; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");
    }
}

class Solution203 {
    public ListNode removeElements(ListNode head, int val) {
        ListNode temp = head;
        if (head.next == null) {
            if (head.val == val)
                return null;
        }
        if (head == null) {
            return head;
        }
        while (temp.next != null) {
            if (temp.val == val) {
                if (temp.next == null)
                    temp = null;
                else {
                    temp.val = temp.next.val;
                    temp.next = temp.next.next;
                    continue;
                }
            }
            if (temp.next.next == null && temp.next.val == val) {
                temp.next = null;
                break;
            }
            temp = temp.next;
        }
        temp = head;
        while (temp.next != null) {
            if (temp.val == val) {
                if (temp.next == null)
                    temp = null;
                else {
                    temp.val = temp.next.val;
                    temp.next = temp.next.next;
                    continue;
                }
            }
            if (temp.next.next == null && temp.next.val == val) {
                temp.next = null;
                break;
            }
            temp = temp.next;
        }
        if (head.next == null) {
            if (head.val == val)
                return null;
        }
        return head;
    }
}
/*
class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode fakeHead = new ListNode(-1);
        fakeHead.next = head;
        ListNode cur = fakeHead;

        while(cur.next!=null){
            if(cur.next.val==val){
                cur.next = cur.next.next;
            }else{
                cur = cur.next;
            }
        }
        return fakeHead.next;
    }
}
 */