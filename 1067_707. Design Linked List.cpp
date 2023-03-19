// 707. Design Linked List

class node{

    public:
    int data ;
    node* next;

    // constructor 


    node(int val )

    {
        this->data=val;
        this->next=NULL;
    }

    // for free memory 
    // destructor 
    

};


class MyLinkedList {
public:

   node * head;
   int size ;
    MyLinkedList() {
       this->head=NULL;
       this->size=0;
        
    }
    
    int get(int index) {

       if(index>size) return -1;
       node * curr= head;
       while(curr && index>0)
       {
           index--;
           curr=curr->next;
       }

       // cheak linked list is over or not 
       if(index==0 && curr!=NULL)
       {
           return curr->data;
       }
       return -1;

        
    }
    
    void addAtHead(int val) {
        node * curr = new node(val);
        curr->next= head;
        head= curr;
        size++;

        
    }
    
    void addAtTail(int val) {
        size++;
        node * newn = new node(val);

        if(head==NULL)
        {
            head=newn;
        }
       else
        {
            node * curr =head;
            while(curr->next)
            {
                curr=curr->next;
            }
            curr->next=newn;

        }
        
    }
    
    void addAtIndex(int index, int val) {

        if(index>size)
        {
            return;
        }

        if(index==0)
        {
            size++;
            addAtHead(val);
            return;
        }
        if(size==index)
        {
            size++;
            addAtTail(val);
            return;
        }

        node * temp= head;
        while(temp && index>0)
        {
            index--;
            
            if(index==0)
            {
                size++;
                node * newn = new node(val);
                newn->next= temp->next;
                temp->next = newn;
                break;
            }
            temp=temp->next;
        }
        
    }
    
    void deleteAtIndex(int index) {

        if(index==0)
        {
            node * curr = head;
            head=curr->next;
            size--;
            delete curr;
            return;
        }

        node *curr = head, *pre = NULL;

		while(curr && index > 0) {
			pre = curr;
			curr = curr->next;
			index--;
            
		}

		if (index == 0 && curr != NULL) {
			node *tmp = curr;
			pre->next = curr->next;
			size--;
			delete tmp;
		}
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
/*

