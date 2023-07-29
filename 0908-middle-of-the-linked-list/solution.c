/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode * slow = head, *fast = head->next;
    while (fast) {
        slow = slow->next;
        if (!fast->next)
            break;
        fast = fast->next->next;
    }
    return slow;
}
