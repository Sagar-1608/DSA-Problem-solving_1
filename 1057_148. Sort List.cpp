// 148. Sort List
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
    ListNode* sortList(ListNode* head) {

        // by using the extra space 
        // convert list in an array 
        // sort array 
        // insert in list 
        // return 


        

        if(head==NULL || head->next == NULL) return head;
        ListNode * temp =head;
        vector<int> arr;
        while(temp)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }

        sort(arr.begin(),arr.end());
        temp = head;
        int i=0;
        while(temp)
        {
            temp->val=arr[i];
            temp=temp->next;
            i++;

        }
        return head;
        
    }
};
