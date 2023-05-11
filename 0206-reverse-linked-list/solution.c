/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    if (head == NULL) return NULL;

    struct ListNode * solution = head;
    if (head -> next) {
        solution = reverseList(head -> next);
        head -> next -> next = head;
    }
    head -> next = NULL;
    return solution;
}
