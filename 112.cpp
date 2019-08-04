/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param head: head is the head of the linked list
     * @return: head of linked list
     */
    ListNode * deleteDuplicates(ListNode * head) {
        // write your code here
        if(head == nullptr) {
            return nullptr;
        }
        ListNode* node = head;
        while(node != nullptr) {
            if(node->val == node->next->val) {
                node->next = node->next->next;
            } else {
                node = node->next;
            }
        }
        return head;
    }
};