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
     * @param head: The first node of linked list.
     * @return: True if it has a cycle, or false
     */
    bool hasCycle(ListNode * head) {
        // write your code here
        set<ListNode*> node_set;
        while(head) {
            if(node_set.find(head) != node_set.end()) {
                return true;
            }
            node_set.insert(head);
            head = head->next;
        }
        return false;
    }
};

