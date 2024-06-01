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
void display(node* head){
    node* temp = head; 
    while(temp!=NULL){
        cout << temp -> data << "->" ;
        temp = temp -> next ;
    }
    cout << "NULL" << endl ;

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
node* reversek(node*& head, int k){
    node* prevptr = NULL ;
    node* currptr = head; 
    node* nextptr ;

    int count = 0;
    while(currptr != NULL && count < k){
        nextptr = currptr->next ;
        currptr -> next = prevptr ;

        prevptr = currptr;
        currptr = nextptr ;
        count++;
    }
    if(nextptr != NULL){
        head -> next = reversek(nextptr , k);
    }

    return prevptr ;
}


int main(){
     node* head = NULL ;
    insertAtTail(head, 1);     
    insertAtTail(head, 2);
    insertAtTail(head, 4);
    insertAtTail(head, 3); 
    //deletion(head, 4);
    //deleteAtHead(head) ;
    display(head) ;
    node* newhead = reverse(head);
    display(newhead) ;
}