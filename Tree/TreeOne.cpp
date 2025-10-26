#include<iostream>
using namespace std;
class Node {
public:

    int data;
    Node* left;
    Node* right;
    Node(int val) {

        this->data = val;
        
        this->left = NULL;
        
        this->right = NULL;

    }
};

//returns root node of create tree 
Node* createTree() {
    cout << "Enter the value: " << endl;
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    // step:1
    Node* root = new Node(data);

    // strp:2 left sub tree

    // cout<<"left of node: "<<root->data<<endl;

    root->left = createTree();

    // strp:3 right sub tree

    // cout<<"right of node: "<<root->data<<endl;

    root->right = createTree();

    return root;
}

void preOrder(Node* root) {
    // base case
    if (root == NULL) {
        return;
    }
    // N L R
    // N
    cout << root->data << " ";
    // L
    preOrder(root->left);
    // R
    preOrder(root->right);
}

void inOrder(Node* root) {
    // LNR
    // base case
    if (root == NULL) {
        return;
    }
    // L N R
    // L
    inOrder(root->left);
    // N
    cout << root->data << " ";
    // R
    inOrder(root->right);
}

void postOrder(Node* root) {
    //L R N
    // base case
    if (root == NULL) {
        return;
    }
    // L
    postOrder(root->left);
    // R
    postOrder(root->right);
    // N
    cout << root->data << " ";
}


int main() {

    Node* root = createTree();
    // cout<<root->data<<endl;
    cout << "Printing Preorder" << endl;
    preOrder(root);
    cout << "Printing Postorder" << endl;
    postOrder(root);
    cout << "Printing InOrder" << endl;
    inOrder(root);


    return 0;
}