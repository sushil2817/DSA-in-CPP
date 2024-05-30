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

int getLen(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
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

void insertAtTail(Node* &head,Node* &tail,int data){
    // LL is empty
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }else{
    // LL is not empty
      Node* newNode = new Node(data);
    //  tail ko new node se connect krna hai
      tail->next = newNode;
      newNode->prev  = tail;
    //   tail ko update krna hai
      tail = newNode;
    }

}

void insertAtMiddle(Node* &head,Node* &tail, int data, int pos){
    int len = getLen(head);
    if(head == NULL){
        // LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }else{
        // LL is not empty
        if(pos == 1){
            insertAtHead(head,tail,data);
        }else if(pos == len+1){
            insertAtTail(head,tail,data);
        }else{
        //step: 1 insert at middle
        Node* newNode = new Node(data);
        // step: 2 prev and curr pointer
        Node* prevNode = NULL;
        Node* currNode = head;
        while(pos != 1){
            pos--;
            prevNode = currNode;
            currNode = currNode->next;
        }
        // step: 3 update pointer
           prevNode->next = newNode;
           newNode->prev = prevNode;

           newNode->next = currNode;
           currNode->prev = newNode;
        }
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
  insertAtTail(head,tail,1000);
  insertAtMiddle(head,tail,56,4);

  print(head);







    return 0;
}