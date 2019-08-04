/**
 * Definition of singly-linked-list:
 *
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
     * @param head: n
     * @return: The new head of reversed linked list.
     */
    ListNode * reverse(ListNode * head) {
        // write your code here
        ListNode* new_head = nullptr;
        while(head) {
            ListNode* temp = new_head;
            new_head = head;
            head = head->next;
            new_head->next = temp;
        }
        return new_head;
    }
};




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int get_list_length(ListNode* head) {
        int len = 0;
        while(head) {
            head = head->next;
            len++;
        }
        return len;
    }
    
    ListNode* new_head(int long_len, int short_len, ListNode* head) {
        int delta = long_len - short_len;
        while(head) {
            head = head->next;
            delta--;
        }
        return head;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len_A = get_list_length(headA);
        int len_B = get_list_length(headB);
        if(len_A > len_B) {
            headA = new_head(len_A, len_B, headA);
        } else {
            headB = new_head(len_B, len_A, headB);
        }
        while(headA && headB) {
            if(headA == headB) {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};
