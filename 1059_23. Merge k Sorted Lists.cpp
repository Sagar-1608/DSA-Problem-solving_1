// 23. Merge k Sorted Lists

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
private :

ListNode* mergeTwoLists(ListNode* &list1, ListNode* &list2) {
       
	    // if list1 happen to be NULL
		// we will simply return list2.
	// by using the 3 loop
	
        if(list1 == NULL)
            return list2;
		
		// if list2 happen to be NULL
		// we will simply return list1.
        if(list2 == NULL)
            return list1;
        
        ListNode * ptr = list1;
        if(list1 -> val > list2 -> val)
        {
            ptr = list2;
            list2 = list2 -> next;
        }
        else
        {
            list1 = list1 -> next;
        }

        ListNode *curr = ptr; // to do not loss head of answer list 
        
		// till one of the list doesn't reaches NULL
        while(list1 &&  list2)
        {
            if(list1 -> val < list2 -> val){
                curr->next = list1;
                list1 = list1 -> next;
            }
            else{
                curr->next = list2;
                list2 = list2 -> next;
            }
            curr = curr -> next;
                
        }
		
		// adding remaining elements of bigger list.
        if(!list1)
            curr -> next = list2;
        else
            curr -> next = list1;
            
        return ptr;
       
    }

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      
    //    if(lists[0]==NULL || lists.size()==0) return NULL;

    //     int k = lists.size();
    //     ListNode* ans;

    //     ans=mergeTwoLists(lists[0],lists[1]);

    //      for(int i=2;i<k;i++)
    //      {
             
    //          ans=mergeTwoLists(ans,lists[i]);

    //      }
    //     return ans;


        vector<int>v;
        for(int i=0;i<lists.size();i++){
            while(lists[i]){
                v.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        sort(rbegin(v),rend(v));
        ListNode* ans=nullptr;
        for(int i=0;i<v.size();i++){
            ans=new ListNode(v[i],ans);
        }
        return ans;
    
        
    }
};
