/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr) return nullptr;
        ListNode * middle_ptr = head;
        ListNode * end_ptr = head;
        while (end_ptr != nullptr) {
            end_ptr = end_ptr -> next;
            if (end_ptr != nullptr && end_ptr->next == nullptr) {
                return middle_ptr->next;
            } else if (end_ptr != nullptr) {
                middle_ptr = middle_ptr->next;
                end_ptr = end_ptr -> next;
            }
        }
        return middle_ptr;
    }
};
