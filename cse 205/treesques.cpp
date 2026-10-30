#include<iostream>
using namespace std;
struct Node {
    Node *left;
    Node *right;
    int data;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// Insertion
Node* insert(Node* root,int value){
    if(root==NULL){
        return createNode(value);
    }
    if(value<root->data){
        root->left=insert(root->left,value);
    }
    else if(value>root->data){
    root->right=insert(root->right,value);
    }
    return root;

}
// Smallest one(Inorder successor)
Node* finMin(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
Node* deleteNode(Node *root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key<root->data){
        root->left=deleteNode(root->left,key);
    }
  else{
    // Case 1->leaf Node
    if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
    }
    else if(root->left==NULL){
        Node*temp=root->right;
        delete root;
        return temp;
    }
    else if(root->right==NULL){
        Node* temp=root->left;
        delete root;
        return temp;

    }
    else{
        Node* temp=finMin(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }
}

    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() {
    Node* root=NULL;
    root=insert(root,55);
    root=insert(root,30);
    root=insert(root,80);
    root=insert(root,20);
    root=insert(root,40);
    root=insert(root,35);
    root=insert(root,70);
    root=insert(root,90);
    cout<<"Before deletion: "<<endl;
    inorder(root);
    deleteNode(root,30);
    cout<<"after deletion :"<<endl;
    inorder(root);





}