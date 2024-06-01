#include <iostream> 
#include <math.h>
using namespace std;

class node{
    public :
    int data ;
    node* next ;
    node(int val){
        data = val ;
        next = NULL ;
    }
} ;

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

int PrintBinary(node* head , int n){
    node* temp = head ;
    int ans = 0 ;
    while(n--){
        if(temp != NULL){
        int expo = pow(2 , n);
        int data = temp -> data; 
        ans += expo * ( data ) ;
        temp = temp -> next ;
        }
    }

    return ans ;
}

int main(){
    node* head = NULL ;
    int n ;
    cin >> n ;

    for(int i = 0 ; i<n ; i++){
        int val ;
        cin >> val ;
        insertAtTail(head , val) ;
    }
    cout << PrintBinary(head , n) ;


}