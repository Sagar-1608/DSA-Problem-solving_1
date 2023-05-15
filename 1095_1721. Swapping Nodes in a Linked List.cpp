// 1721. Swapping Nodes in a Linked List
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
       ListNode* FindNodes(ListNode* head, int position) 
       {
           for(int i = 1 ; i<position;i++)
          {
            head= head->next;
         }
         return head;
    
       }

       int size(ListNode* head) 
       {
           int i =0;
           while(head)
           {
               i++;
               head= head->next;
           }
           return i;
    
       }
    
    ListNode* swapNodes(ListNode* head, int k) {

        int len = size(head);
     
        ListNode* kBegin =  FindNodes(head, k) ;
        ListNode* kEnd = FindNodes(head, (len-k+1)) ;

        int temp = kBegin->val;
        kBegin->val = kEnd->val;
        kEnd->val= temp; 

        return head;

        
    }
};
