#include<iostream>
using namespace std;
//Node creation
struct Node
{
    int data;
    Node *left;
    Node *right;
};
//insert node
Node *createNode(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->left= NULL;
    newNode->right=NULL;
    return newNode;
}

//Insertion
Node*insert(Node *)

