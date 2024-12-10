// check for loop 
// if you solved some problem with MAP trying to solve that question with other method like fast and slow (toutais method)

bool checkLoop(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        // check for loop
        if(fast == slow){
            return true;
        }
    }
    return false;
}

// Starting point off loop

Node* getStartingPoint(Node* &head){
   Node* slow = head;
   Node* fast = head;
   while(fast != NULL){
         fast = fast->next;
         if(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
         }

         if(fast == slow){
            break;
         }
   }
    //  mtlb slow and fast meet kr chuke hai
     slow = head;

    //  slow and fast -> 1 step
    while(fast!=slow){
        slow = slow->next;
        fast = fast->next; 
    }
    // return starting point
    return slow;
}