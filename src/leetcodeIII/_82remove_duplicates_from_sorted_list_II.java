package leetcodeIII;

public class _82remove_duplicates_from_sorted_list_II {
    public static void main(String[] args) {
        ListNode first = new ListNode(-1);
        ListNode head = first;
        ListNode last;
        int list[] = {1,2,2,3,3,3,3,4,5};
        for (int i = 0; i < list.length; i++) {
            last = new ListNode(list[i]);
            head.next = last;
            head = last;
        }
        for (ListNode node = first.next; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");

        ListNode s = new Solution82().deleteDuplicates(first.next);

        for (ListNode node = s; node != null; node = node.next)
            System.out.print(node.val + "->");
        System.out.println("NULL");

    }
}
class Solution82 {
    public ListNode deleteDuplicates(ListNode head) {
/*
*这个题目丧心病狂……
*
 */
        if (null == head || null == head.next) return head;
        boolean mark = false;
        int token = head.val;

        for (ListNode node = head; node != null; node = node.next)
            if (node.val != token || head.next == null) {
                mark = true;
                break;
            }
        if (mark==false)
            return null;
        ListNode fakeHead = new ListNode(-11);
        ListNode ans;
        fakeHead.next = head;
        ListNode temp = fakeHead;
        int ans1 = -10;
        int dup = 1;
        while (temp.next != null) {             //核心代码
            if (temp.next.val == temp.val) {    //核心代码
                ans = temp;                     //核心代码
                ans1 = temp.val;
                for (ListNode node = head;node!=null;node=node.next){
                    if (node.val == head.val){
                        dup = 1;
                    }
                    else {
                        dup = 2;
                    }
                }
                if (dup == 1&&head.next!=null){
                    return null;
                }
                while (ans.next != null) {      //核心代码
                    if (ans.val != temp.val) break;//核心代码
                    ans = ans.next;             //核心代码
                }
                temp.val = ans.val;             //核心代码

                if (ans.next != null)           //核心代码
                    temp.next = ans.next;       //核心代码
                else { temp.next = null;break;} //核心代码

            } else {                            //核心代码
                temp = temp.next;               //核心代码
            }                                   //核心代码
        }                                       //核心代码

        for (ListNode node = head;node!=null;node=node.next){
            if (node.val == head.val){
                dup = 1;
            }
            else {
                dup = 2;
            }
        }
        if (dup == 1&&head.next!=null){
            return null;
        }


        for (ListNode node = head;node!=null;node=node.next)
            if (node.val!=token||head.next==null){
                mark = true;
                break;
            }

        if (mark==true){
            ListNode snode = head;
            while (snode.next!=null){
                if (snode.next.val==ans1){
                    snode.next=null;
                    break;
                }
                snode = snode.next;
            }
            return head;
        }
        else return null;

    }
}
