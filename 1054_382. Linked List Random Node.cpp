// 382. Linked List Random Node


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
ListNode * head;
int n =0;
public:
    Solution(ListNode* head) {
        this->head=head;
        ListNode *temp = head;

        while(temp)
        {
            n++;
            temp=temp->next;
        }
        
    }
    
    int getRandom() {
        int getval= rand()%n; //%n is for maintain the range the linked list that value not come out of bound
        ListNode * temp = head;
        for(int i =0; i<getval;i++)
        {
            temp=temp->next;
        }
        return temp->val;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
