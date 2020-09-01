/*


Given a linked list, remove the n-th node from the end of list and return its head.

Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
Note:

Given n will always be valid.

Follow up:

Could you do this in one pass?



*/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode * ptr = head;
        int i = 0;

        
        if(head == NULL){
            return head;
        }
       
        
        while(ptr != NULL){
            ptr = ptr->next;
            i++;
        }

        //size - n = node before we need to remove
        int j = i - n;
        
        
        if(j==0) return head->next;
        
        
        ptr = head;
        while(--j){
            ptr = ptr->next;
        }
        
        
        ptr->next = ptr->next->next;
        
        return head;
        
    }
};