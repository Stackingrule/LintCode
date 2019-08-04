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
     * @param head: the given linked list
     * @return: the array that store the values in reverse order 
     */
    void reverse(ListNode* head, vector<int> &array) {
        if(head == nullptr) return;
        else {
            reverse(head->next, array);
        }
        array.push_back(head->val);
    }
    
    vector<int> reverseStore(ListNode * head) {
        // write your code here
        vector<int> result;
        reverse(head, result);
        return result;
    }
};