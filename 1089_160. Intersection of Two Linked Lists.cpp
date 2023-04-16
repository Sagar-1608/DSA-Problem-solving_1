// 160. Intersection of Two Linked Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
    int getLength(ListNode * head)
    {
        int len =0;
        while(head)
        {
            len++;
            head=head->next;

        }
        return len;
    }

ListNode *helper(ListNode *headA, ListNode *headB)
{
    
    //finding the intersection 
    
    while(headA && headB)
    {
       
        if(headA==headB)
        {
            return headA;
        }
        headB = headB->next;
        headA = headA->next;
    }
    return NULL;

}

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = getLength(headA);
        int lenB = getLength(headB);
        
        // calculate the length of both length
        int diff = abs(lenA - lenB);



       // equate the length of both list according to there length 
        if (lenA>lenB)
        {
            while(diff--)
            {
                headA=headA->next;
            } 
        }
        else{
            while(diff--)
            {
                headB=headB->next;
            }
           
        }
        
        return helper(headA , headB);

    


        
    }
};
