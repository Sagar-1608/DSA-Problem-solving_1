
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
private:
ListNode * reverse(ListNode * head)
{
    if(head==NULL || head->next==NULL) return head;

    ListNode * chotahead = reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return chotahead;


    


}
public:
    ListNode* removeNodes(ListNode* head) {

        if(head==NULL || head->next==NULL) return head;
        ListNode * rever;
        rever=reverse(head);
        ListNode *curr=rever;
        ListNode * forw=rever->next;

        while(forw)
        {
            if(curr->val>forw->val)
            {
                curr->next=forw->next;
                forw=forw->next;

            }
           else
           {
                 curr=forw;
            forw=forw->next;

           }
          


        }

        rever=reverse(rever);
        return rever;

        
    }
};
