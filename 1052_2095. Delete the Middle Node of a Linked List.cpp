// 2095. Delete the Middle Node of a Linked List
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
    ListNode* deleteMiddle(ListNode* head) {
        
        
        if(head==NULL || head->next==NULL ) return NULL;
         
        ListNode *slow = head;
        ListNode *fast=head;
        ListNode *prev = NULL;
        
        // slow cover 1 pointy at that time fast cover 2 point 
        while (fast && fast->next)
        {  
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
       
        delete slow;
        return head;

        
    }
};

