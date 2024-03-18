// 328. Odd Even Linked List

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
    ListNode* oddEvenList(ListNode* head) {

        if(head==NULL ||head->next==NULL ) return head;
   ListNode * ohead=NULL ,*ehead=NULL, *otail=NULL, *etail=NULL;
   int c=1;

   

    while(head)
    {
        if(c%2==0) //even
        {
           if(ehead==NULL)
           {
               ehead=head;
               etail=head;

           }
           else
           {
               etail->next=head;
               etail=etail->next;
           }
        }
        else
        {
            if(ohead==NULL)
            {
                ohead=head;
                otail=head;

            }
            else
            {
                otail->next=head;
                otail=otail->next;

            }

        }

         c++;
         head=head->next;
    }
    

    // if(ohead==NULL)
    // {
    //     return ehead;
        
    // }
    // if(ehead==NULL)
    // {
    //     return ohead;
    // }
   
    otail->next=ehead;
    etail->next=NULL;
    return ohead;

        
        
    }
};
