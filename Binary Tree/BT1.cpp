// non -linear data structure
// 1) Root Node
// 2) Parent Node
// 3) Child Node
// 4) Ancestor
// 6) level
// 7) sibiling / neighbour
// every node have atmost 2 child
// left sub tree always creating first then right sub tree creating
// Time Complexity O(n)
// space Complecity O(n)
// skew tree O(n)

#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// it return root node of the created tree
Node *createTree()
{
    cout << "Enter the value for Node: " << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    // step1: create node
    Node *root = new Node(data);
    // step2: create left sub tree
    cout << "left of Node: " << root->data << endl;
    root->left = createTree();
    // step3: create right sub tree
    cout << "right of Node: " << root->data << endl;
    root->right = createTree();

    return root;
}

// preOrder triversal
void preOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    else
    {
        // N L R
        // N
        cout << root->data << " ";
        // L
        preOrderTraversal(root->left);
        // R
        preOrderTraversal(root->right);
    }
}

// inorder triverser
// LNR

void inOrderTriversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        // LNR
        inOrderTriversal(root->left);
        // N
        cout << root->data << " ";
        // R
        inOrderTriversal(root->right);
    }
}

// post order triversal
// LRN

void postOrderTriversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        // L
        postOrderTriversal(root->left);
        // R
        postOrderTriversal(root->right);
        // N
        cout << root->data << " ";
    }
}

int main()
{

    Node *root = createTree();

    cout << root->data << endl;
    cout << "Printing preorder: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "printing Inorder: ";
    inOrderTriversal(root);
    cout << endl;

    cout << "printing Postorder: ";
    postOrderTriversal(root);
    cout << endl;

    return 0;
}