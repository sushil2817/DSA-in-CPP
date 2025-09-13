#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;


    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//returns root node of create tree 
Node* createTree(){
    cout<<"Enter the value: "<<endl;
    int data;
    cin>>data;

    if(data == -1){
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


int main(){

    Node* root = createTree();
    cout<<root->data<<endl;

return 0;
}