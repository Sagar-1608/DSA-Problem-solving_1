// 92. Reverse Linked List II

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    //    if((head==NULL || head->next ==NULL) ) return head;
    //    if(head->next->next==NULL && right == left) return head;
    //    if(head->next->next==NULL && right != left) 
    //    {
    //        ListNode* temp = head->next;
    //         temp->next=head;
    //         head->next=NULL;

    //        return temp;
    //    }
    //    if(right ==left ) return head;

     
    //     ListNode * curr=head;
    //     ListNode * prev= NULL;
    //     int i =1;
    //     while(i < left)
    //     {    
    //          prev=curr;
    //          curr=curr->next;
    //          i++;
    //     }
        
    //     ListNode *next = NULL;
    //     ListNode *prev1=NULL;
    //     ListNode *lefty= curr;
    //     int j=0;
    //     while(j<=(right-left) && curr!=NULL)
    //     {
    //         next = curr->next;
    //         curr->next = prev1;
    //         prev1 =curr;
    //         curr=next;
    //         j++;
    //     }
        
        
    //     prev->next=prev1;
    //     lefty->next =next;
    //     return head;


    if(head == NULL || right == left ) return head;
    ListNode *dummy = new ListNode();
     dummy->next=head;
    ListNode *prev=dummy,*curr=NULL,*forw=NULL;
    
    for(int i=0; i<left-1;i++)
    {
      prev=prev->next;//1
    }
    curr=prev->next; //2

    for(int i=0;i<(right-left);i++)
    {
        forw=curr->next; //3
        curr->next=forw->next; //2-4
        forw->next=prev->next; //3-2
        prev->next = forw;     //1-3

        //final got in step 1 is -> 1-3-2-4-5
        //step 2 is -> 1-4-3-2-5
        
        
        
        // new approach 
        // by using thr stack we can reverse the list
        

    }
    return dummy->next;

        
    }
};
