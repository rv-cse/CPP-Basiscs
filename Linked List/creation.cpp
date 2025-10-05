#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next; 
};

int main(){
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    first->data = 15 ;
    second->data = 20 ;
    third->data = 30 ;


    first->next = second ;
    second->next = third;
    third->next = NULL ; 

    Node*temp = first;
    while(temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next;

    }

    cout << "NULL" << "\n" ;

    return 0;
}