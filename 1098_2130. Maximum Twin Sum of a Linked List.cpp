// 2130. Maximum Twin Sum of a Linked List
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
    int pairSum(ListNode* head) {

        if(head==NULL) return 0;
        int ans=0;


        ListNode* slow = head;
        ListNode* fast=head;

        
        
        // go to middle node 
        while(fast)
        {
            slow = slow->next;
            fast=fast->next->next;
        }



       // reverse the the linked list form middle 
        ListNode* current = slow;
        ListNode *prev = NULL, *next = NULL;
 
        while (current)
         {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        slow  = prev;



        // calculating the sum of pair of linked list  
        while(slow)
        {
            int sum = head->val+slow->val;
            ans=max(ans,sum);

            slow = slow->next;
            head = head->next;
        }


        return ans ;


        
    }
};
