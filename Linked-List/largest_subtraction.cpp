#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public :
    int data ;
    node* next;

    node(int val){
        data = val ;
        next = NULL ;
    }
};

void insertAtTail(node*& head , int val){
    node* n = new node(val) ;

    if(head == NULL){
        head = n ;
        return ;
    }
    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next ;
    }
    temp->next = n ;
}

void display(node*  &head){
    node* temp = head ;

    while(temp != NULL){
        cout << temp -> data << "->" ;
        temp = temp -> next ;
    }
    cout<< "NULL" << endl ;
}

void subLinkedList(node* head1 , node* head2){
    node* temp1  = head1 ;
    node* temp2 = head2 ;

    int val1 = 0 , val2 = 0;

    while (temp1 != NULL && temp2 != NULL){
        val1 = val1 * 10 + (temp1 -> data) ;
        val2 = val2* 10 + (temp2 -> data) ;
        temp1 = temp1 -> next ;
        temp2 = temp2 -> next ;
    }
    while (temp1 != NULL){
        val1 = val1 * 10 + (temp1 -> data) ;
        temp1 = temp1 -> next ;
    }
    while(temp2 != NULL){
        val2 = val2 * 10 + (temp2 -> data) ;
        temp2 = temp2 -> next ;
    }
    long int sub = max(val1 , val2 ) - min(val1 , val2) ;

    cout << sub << endl;

}
int main(){
    node* head1 = NULL ;
    node* head2 = NULL ;
    insertAtTail(head1 , 0  ) ;
    insertAtTail(head1 , 0) ;
    insertAtTail(head1 , 6) ;
    insertAtTail(head1 , 3) ;

    insertAtTail(head2 , 7) ;
    insertAtTail(head2 , 1) ;
    insertAtTail(head2, 0) ;
    subLinkedList(head1 , head2) ;
    return 0;
}

//doesn't work for bigger subtractions 