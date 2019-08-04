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
     * @param head: the head of linked list.
     * @return: An integer list
     */
    vector<int> toArrayList(ListNode * head) {
        // write your code here
        vector<int> ArrayList;
        ArrayList.clear();
        while(head != nullptr) {
            ArrayList.push_back(head->val);
            head = head->next;
        }
        return ArrayList;
    }
};