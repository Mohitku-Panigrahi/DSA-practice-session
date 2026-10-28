#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->left= NULL;
    newNode->right=NULL;
    return newNode;
}

void inorder(Node *root)
{
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right); //only diff is this part
    cout<<root->data<<" ";
};

int main(){
    Node *root= createNode(10);

    root->left = createNode(2);
    root->right= createNode(3);

    root->left->left = createNode(4);
    root->left->right= createNode(5);

    cout<<"Inorder Traversal: ";

    inorder(root);
    return 0;
}