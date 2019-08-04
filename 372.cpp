/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param node: the node in the list should be deleted
     * @return: nothing
     */
    void deleteNode(ListNode * node) {
        // write your code here
        if(node == nullptr) return;
        if(node->next == nullptr) {
            delete node;
            node = nullptr;
            return;
        }
        node->val = node->next->val;
        node->next = node->next->next;
        return;
    }
};