#include<iostream>
using namespace std; 
// if some question solve with map trying to solve it with another method because interviewrs say try to do another method


bool checkLoop(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL){
          fast = fast->next;
          if(fast != NULL){
            fast = fast>next
            slow = slow->next;

          }

        //   check for loop
        if(fast == slow){
            return true;
        }

    }
    return false;
}
int main(){




    return 0;
}