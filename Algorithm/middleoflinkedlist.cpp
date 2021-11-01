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

    // ListNode* middleNode(ListNode* head) {
    //     ListNode *slow = head, *fast = head;
    //     while (fast && fast->next)
    //         slow = slow->next, fast = fast->next->next;
    //     return slow;
    // }
class Solution {
public:
    int length(ListNode *head){
        if(head == NULL){
            return 0;
        }
        int count = 0;
        while(head){
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        if(head == NULL){
            return head;
        }
        int count = 1;
        int n = length(head)/2;
        while(count <= n){
            head = head->next;
            count++;
        }
        return head;
        
    }
};
