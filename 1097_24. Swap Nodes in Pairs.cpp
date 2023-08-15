// 24. Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) {

        // by using the recursive way 
        // T= O(N)
        
    if(head==NULL || head->next == NULL) return head ;

    ListNode* second = head->next;
    ListNode* third = second->next;

    second->next = head;
    head->next = swapPairs(third);
    return second;







    // by loop  

//     ListNode* dummy = new ListNode(-1);

//     ListNode* prev = dummy;
//     ListNode* curr = head;
//     dummy->next = head;


//     while(curr && curr->next )
//     {

//         //swaping 
//         prev->next = curr->next;
//         curr->next= curr->next->next;
//         prev->next->next = curr;


//        //update 
//         curr=curr->next;
//         prev= prev->next->next;
//     }
//    return dummy->next;



        



    }
};
