// Reverse a linked list

// Leetcode Q 206 -----------------------------------

ListNode *reverseUsingRecursion(ListNode *prev, ListNode *curr)
{
    //   base case
    if (curr = NULL)
    {
        return prev;
    }
    ListNode *nextNode = curr->next;
    curr->next = prev;
    //    pasing one step next for recusion
    ListNode *recursionKaAns = reverseUsingRecursion(curr, nextNode)
}

ListNode *reverseList(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;
    reverseUsingRecursion(prev, curr);

    //    while(curr != NULL){
    //     ListNode* nextNode = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = nextNode;K
    //    }
    // return prev;
}

// Middle of linke list
// LeetCode 876 ----------------------
// two pointer approach
// Tortoies approach
// slow & fast approach

// slow = 1step
// fast = 2step
// slow tabhi ek step aage chlega jb fast 2 step aage chlega

int getLen(ListNode *head)
{
    int len = 0;
    ListNode *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
ListNode *middleNode(ListNode *head)
{
    int n = getLen(head);
    int position = n / 2 + 1;
    int currPos = 1;
    ListNode *temp = head;
    while (currPos != position)
    {
        currPos++;
        temp = temp->next;
    }
    return temp;
}

// Check cycle in a linked list
// Leetcode 141

bool hasCycle(ListNode *head)
{
    map<ListNode *, bool> table;
    ListNode *temp = head;
    while (temp != NULL)
    {
        if (table[temp] == false)
        {
            table[temp] = true;
        }
        else
        {
            // cycle present
            return true;
        }
        temp = temp->next;
    }
    // loop not present;
    return false;
}