/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
    if (head == null) return null;
    let tortoise = head;
    while (head && head.next) {
        tortoise = tortoise.next;
        head = head.next.next;
    }
    return tortoise;
};
