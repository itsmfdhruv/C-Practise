#include<iostream>

using namespace std;
//all time linked list code
class node{
    public :
    int data ;
    node* next ;

    node(int val){
        data = val ;
        next = NULL ;
    }
};

void insertAtTail(node* &head, int val){
    //intialisation a pointer for new link in the list 
    node* n = new node(val) ;

    if(head == NULL){
        head = n ;
        return;
    }
    //making the next of new link to n pointer
    node* temp = head ;
    while(temp -> next !=NULL){
        temp = temp -> next ;
    }
    temp->next = n ;
}

void insertAtHead(node* &head , int val){
    node* n = new node(val) ;
    n->next = head;
    head= n;
}

void display(node* head){
    node* temp = head; 
    while(temp!=NULL){
        cout << temp -> data << "->" ;
        temp = temp -> next ;
    }
    cout << "NULL" << endl ;

}
bool search(node* head , int key){
    
    node* temp = head;
    while(temp != NULL){
        if(temp ->data == key){
            return true ;
        }
        temp = temp->next ;
    }

    return false;
}

void deleteAtHead(node* &head){
    node* todelete = head ;
    head = head -> next ;

    delete todelete ;
}

void deletion(node* &head, int key){

    if(head == NULL){
        return ;
    }

    if(head->next ==NULL){
        deleteAtHead(head) ;
    }

    node* temp = head ;
    while(temp->next->data!=key){
        temp = temp->next;    
    }

    node* todelete= temp->next ;
    temp->next = temp->next->next ;

    delete todelete ;

}

node* reverse(node*& head){
    node* prevptr = NULL ;
    node* currptr = head ;
    node* nextptr ;

    while(currptr != NULL){
        nextptr = currptr -> next ;
        currptr-> next = prevptr ;

        prevptr = currptr ;
        currptr = nextptr; 
    }
    return prevptr ;
}

node*  reverseRecursive(node* &head){

    if(head == NULL || head->next ==NULL){
        return head ;
    }

    node* newhead = reverseRecursive(head->next) ;
    head->next->next = head;
    head->next = NULL ;

    return newhead;
    
}

void makeCycle(node* & head , int pos){
    node* temp = head ;
    node* CycleLink ;

    int count = 0;
    while(temp->next != NULL){

        if(count == pos){
            CycleLink = temp ;
        }
        count ++ ;
    }
    temp->next = CycleLink ;
}

bool DetectCycle(node* head){
    node* fast = head ;
    node* slow = head ;

    while(fast->next != NULL && fast != NULL){
        fast = fast->next->next;
        slow = slow->next ;

        if(fast == slow){
            return true ;
        }
    } 
    return false ;
}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head ;

    do
    {
        slow = slow->next ;
        fast = fast -> next -> next ;
    } while ( fast != slow);
    fast = head ;
    while(slow->next != fast->next){
        slow = slow->next ;
        fast = fast -> next ;
    }
    slow->next = NULL ;
    }

int length(node* head){
    node* temp = head ;
    int ct = 0 ;

    while(temp != NULL){
        ct++ ;
        temp=temp->next ;
    }

    return ct ;
}

node* kappend(node* &head , int k){
    node* newHead ;
    node* newTail ;
    node* tail = head ;

    int lengths = length(head) ;
    k = k%lengths ;
    int count = 1 ;
    while(tail -> next != NULL){
        if(count == lengths - k){
            newTail = tail ;
        }
        if(count == lengths - k + 1){
            newHead = tail ;
        }

        tail = tail -> next ;
        count ++ ;
    }

    newTail -> next = NULL ;
    tail -> next = head ;

    return newHead ;
}


int intersection(node* &head1,node* &head2 ){
    int l1 = length(head1) ;
    int l2 = length(head2) ;

    node* ptr1 ;
    node* ptr2 ;
    int d;

    if(l1>l2){
        d= l1 -l2 ;
        ptr1 = head1 ;
        ptr2 = head2 ;
    }else{
        d= l2-l1 ;
        ptr1 = head2 ;
        ptr2 = head1 ;
    }

    while(d){
        ptr1 = ptr1 -> next ;
        if(ptr1 == NULL){
            return -1 ;
        }
        d-- ;
    }
    while(ptr1 != NULL && ptr2 != NULL){

        if(ptr1 == ptr2 ){
            return ptr1 -> data ;
        }

        ptr1 = ptr1 -> next ;
        ptr2 = ptr2 -> next ;
    }

    return -1 ;
}

void intersect(node* head1 , node* head2 , int pos){
    node* temp1 = head1 ;
    pos-- ;

    while(pos--){
        temp1 = temp1 -> next ;
    }
    node* temp2 = head2 ;
    
    while(temp2->next != NULL){
        temp2 = temp2 -> next ;
    }

    temp2->next = temp1 ;
}

void Merge2Lists() ;

int main(){
    node* head1 = NULL ;
    node* head2 = NULL ;
    insertAtTail(head1, 1);     
    insertAtTail(head1, 2);
    insertAtTail(head1, 3); 
    insertAtTail(head1, 4);
    insertAtTail(head1 , 5);
    insertAtTail(head1, 6);
    insertAtTail(head2 , 9);
    insertAtTail(head2 , 10);
    intersect(head1 , head2 , 3) ;

    cout << intersection(head1,head2) ;
    //deletion(head, 4);
    //deleteAtHead(head) ;

    // node* newhead = reverse(head);
    // display(newhead) ;
}