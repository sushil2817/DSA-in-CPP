// Linked list is non contigious , linear data structor and linked list is set of node;
// linked list is hindi



#include<iostream>
using namespace std; 

class Node{
       
       public:

       int data;
       Node* next;


       Node (){
        cout<<"default Constructor"<<endl;
        this->next = NULL;
       }

       Node(int data){
          this->data = data;
          this->next = NULL;
        //   cout<<"pera Construction called"<<endl;
       }
};

void printLL(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next; 
    }
    cout<<endl;
}

void getLenOfLL(Node* head){
    Node* temp = head; 
    int counter = 0;
      while(temp != NULL){
        counter++;
        temp = temp->next;
      }
      cout<<endl<<counter;

}


int main(){
  
//   creation LL
    //   Node* a;

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    
    // Connecting node

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first;

    // printing node

    printLL(head);

    // Linked List length;
     getLenOfLL(head);

      


    return 0;
}