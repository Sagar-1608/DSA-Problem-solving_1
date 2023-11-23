// 234. Palindrome Linked List
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
ListNode * getmid(ListNode * head)
{
    ListNode * slow=head, *fast = head->next;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    
}
ListNode * reverse(ListNode * head)
    {
        // base 
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        ListNode* chotahead=reverse(head->next);

        head->next->next=head;
        head->next=NULL;
        return chotahead;

    }

public:
    bool isPalindrome(ListNode* head) {



    //   approch 1 using extra space T=O(n) S=O(n)
       if(head==NULL) return true;
        vector<int> arr;
        ListNode * temp= head;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }

        int s=0, e= arr.size()-1;
        while(s<=e)
        {
            if(arr[e]!=arr[s])
            {
                return false;
            }
            else
            {
                s++;
                e--;
            }
        }
        return true;



        // approch2 reverse the list and cheak T=O(n) S=O(0)
// with out space
        if(head== NULL || head->next ==NULL)  return true;
       
        
    
     
        ListNode * mid = getmid(head);
        ListNode *temp =mid->next;
        mid->next = reverse(temp);

        ListNode * head1 =head;
        ListNode * head2 =mid->next;

        while(head2)
        {
            if(head2->val != head1->val)
            {
                return false;
            }
           
                head1= head1->next;
                head2=head2->next;
            
        }
        return true;


        
    }
};
