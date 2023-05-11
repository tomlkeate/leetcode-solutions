/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode * result = NULL;
    while (head) {
        if (!result && head -> val != val) {
            result = head;
        }
        if (head->next && head->next->val == val) {
            head->next = head->next->next;
        } else {
            head = head->next;
        }
    }
    return result;
}
