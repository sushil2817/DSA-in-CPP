#include<iostream>
using namespace std;


class Node{
    public:

    int data;
    Node* prev;
    Node* next;
    Node(){
        this->prev=NULL;
        this->next=NULL;
    }

      Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
      }
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

void getLen(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    cout<<count;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    //   LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;

    }else{
        // LL is not empty
        Node* newNode = new Node(data);
        // new node ko head se connect kiya
        newNode->next = head;
        // head ko connect kiya new node se
        head->prev = newNode;
        // head ko update kiya
        // head = newNode
        head = head->prev;
    }
}

int main(){
  

// Doubly Linked List

  Node* head = NULL;
  Node* tail = NULL;
  insertAtHead(head,tail,40);
  insertAtHead(head,tail,30);
  insertAtHead(head,tail,20);
  insertAtHead(head,tail,10);

  print(head);






    return 0;
}