// Linear data structor  :- Array and Vector
// Contigious Memory Allocation
// memory wested


// Contigious and Non contigious memory Allocation
// Collection of Nodes
// Linear Data structor


// linked list is hindi 
// jb tumhe null mil jaye mtlb linked list ka end ho gya

// Linked List types
// a)Singly Linked List 
// b)Doubly Linked List 
// c)Circular Linked List 
// d)Circular Doubly Linked List 



#include<iostream>
using namespace std; 

 class Node{
    public:

    int data;
    Node* next;
    
     Node(){
        cout<<"Inside default constructor"<<endl;
        this->next= NULL;
     }

     Node(int data){
        this->data = data;
        this->next = NULL;
        // cout<<"inside pera constructor"<<endl;
     }


 };

// linked list ko hmesa temprary hi pass krege kbhi bhi original pointer pass nhi krege
 void printLL(Node* head){
       
        Node* temp = head;
        while(temp != NULL){
             cout<<temp->data<<"->";
             temp = temp->next;
        }
        cout<<endl;
 }

 int getLen (Node* head){
    Node* temp = head;
     int count = 0;
     while(temp != NULL){
        count++;
        temp=temp->next;
     }

     return count;
 }

int main(){
   
    // creation of Node

    // Node a;
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    

     Node* head = first;

     printLL(head);
     cout<<endl;

     cout<<getLen(head);

    //  Insertion in a Linked List
    


    return 0;
}