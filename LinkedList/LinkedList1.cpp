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

// T.C. O(n) because for insertation oe deletion ke liye puri Linked list me hi triverse krna pad rha h

#include <iostream>
using namespace std;

class Node
{
public:
   int data;
   Node *next;

   Node()
   {
      cout << "Inside default constructor" << endl;
      this->next = NULL;
   }

   Node(int data)
   {
      this->data = data;
      this->next = NULL;
      // cout<<"inside pera constructor"<<endl;
   }

   ~Node()
   {
      cout << "Destructor Called for " << this->data << endl;
   }
};

// linked list ko hmesa temprary hi pass krege kbhi bhi original pointer pass nhi krege
void printLL(Node *head)
{

   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << "->";
      temp = temp->next;
   }
   cout << endl;
}

int getLen(Node *head)
{
   Node *temp = head;
   int count = 0;
   while (temp != NULL)
   {
      count++;
      temp = temp->next;
   }

   return count;
}

// head ko pass by reference krna hai hmesa
// -----corner case:---- empty linked list ho to
// empty LL me head or tail same jgh hote hai
// single element wale case me head =- tail
void insertionAtHead(Node *&head, Node *&tail, int data)
{

   if (head == NULL)
   {
      // empty LL
      Node *newNode = new Node(data);
      head = newNode;
      tail = newNode;
   }
   else
   {

      Node *newNode = new Node(data);
      //  attach new node
      newNode->next = head;
      //   update head
      head = newNode;
   }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
   if (head == NULL)
   {
      // empty case
      // create node
      Node *newNode = new Node(data);
      // single nod eh head == tail
      head = newNode;
      tail = newNode;
   }
   else
   {
      // non empty case
      Node *newNode = new Node(data);
      tail->next = newNode;
      tail = newNode;
   }
}

void insertAtAnyPosition(Node *&head, Node *tail, int data, int position)
{
   // if(position < 1){
   //    cout<<"Cannot inser, please Enter a vaild position "<<endl;
   //    return ;
   // }

   int length = getLen(head);
   // if(position > length){
   //     cout<<"Cannot inser, please Enter a vaild position "<<endl;
   //     return ;
   // }

   if (position <= 1)
   {
      // insert at head
      insertionAtHead(head, tail, data);
   }
   else if (position > length)
   {
      insertAtTail(head, tail, data);
   }
   else
   {
      // insert at middle of ll
      // step1: create Node
      Node *newNode = new Node(data);
      // step2: prev // curr to position
      Node *prev = NULL;
      Node *curr = head;

      while (position != 1)
      {
         prev = curr;
         curr = curr->next;
         position--;
      }
      // step3: attach prev and curr node
      prev->next = newNode;
      newNode->next = curr;
   }
}

void createTail(Node *head, Node *tail)
{
   Node *temp = head;
   while (temp->next != NULL)
   {
      temp = temp->next;
   }
   // jab ye loop khatam hojayega
   // then aapka temp wala pointer khada hoga last nod epar
   //  tab tail = temp krkde, tail ko last node pr le aao
   tail = temp;
}

//   Deletion from singlly linked list
/*
  a) delete from head
  b) delete from any position
  c) delete from tail

*/

void deleteNode(Node *&head, Node *&tail, int position)
{
   //   empty list
   if (head == NULL)
   {
      cout << "Cannot delete , coz LL is empty" << endl;
      return;
   }
   if (head == tail)
   {
      // single element
      Node *temp = head;
      delete temp;
      head = NULL;
      tail = NULL;
   }
   int len = getLen(head);
   // delete from head

   if (position == 1)
   {
      // first node ko delete kr do
      Node *temp = head;
      head = head->next;
      // head = temp->next;
      temp->next = NULL;
      delete temp;
   }
   else if (position == len)
   {
      // last node ko delete kardo

      // find prev
      Node *prev = head;
      while (prev->next != tail)
      {
         prev = prev->next;
      }
      //  prev node ka link null karo
      prev->next = NULL;
      // engineering approach
      // delete tail
      delete tail;
      //  update tail
      tail = prev;
   }
   else
   {
      // middle me koii node ko delete karna
      //  step 1 set prev/curr pointers
      Node *prev = NULL;
      Node *curr = head;

      while (position != 1)
      {
         position--;
         prev = curr;
         curr = curr->next;
      }
      // step2: prev ke next me curr ka next add kro
      prev->next = curr->next;
      // step3: node isolate krdo
      curr->next = NULL;
      //   step4: delete node
      delete curr;
   }
}

int main()
{

   // function ke according LL banna

   Node *head = NULL;
   Node *tail = NULL;

   for (int i = 1; i <= 10; i++)
   {

      insertAtTail(head, tail, i);
   }

   // printLL(head);

   // insertAtAnyPosition(head, tail, 40, 1000);
   // printLL(head);

   // cout<<endl;
   // cout<<endl;

   // deleteNode(head,tail,6);
   // cout<<endl;
   // printLL(head);

   printLL(head);

   cout << endl;
   cout << "Before-> Length of LL is: " << getLen(head) << endl;
   cout << "Before tail->" << tail->data << endl;
   deleteNode(head, tail, 1);
   cout << "After Length of LL is " << getLen(head) << endl;
   cout << "After tail => " << tail->data << endl;

   // // creation of Node

   // // Node a;
   // Node *first = new Node(10);
   // Node *second = new Node(20);
   // Node *third = new Node(30);
   // Node *fourth = new Node(40);
   // Node *fifth = new Node(50);
   // Node* tail = fifth;

   // first->next = second;
   // second->next = third;
   // third->next = fourth;
   // fourth->next = fifth;

   // Node *head = first;

   // printLL(head);

   // cout << endl;

   // // cout << getLen(head);

   // // Insetion Node at head

   // //  insertionAtHead(head,tail,500);

   // // cout << getLen(head);
   // // cout<<endl;
   // // printLL(head);

   // // Insert Node at tail

   //   insertAtTail(head, tail, 300);

   // cout << getLen(head);
   // cout<<endl;
   // printLL(head);

   // insert at any position

   return 0;
}