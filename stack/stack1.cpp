/// we will learn stack basic operations

#include <iostream>
using namespace std;

/// functions for pop , push , peek , display

#define MAX 5

int mystack[MAX];
int top = -1; // Intially stack empty that's y -1

// we will create our gaurd

// isfull() , isempty()

bool isFull()
{
    return top == MAX - 1;
}

bool isEmpty()
{
    return top == -1;
}

void push(int data)
{
    if (isFull())
    {
        cout << "Kal aana bhai stack full hai" << endl;
        return;
    }

    ++top;
    mystack[top] = data;
}

void pop()
{
    if (isEmpty())
    {
        cout << "Bache ki jaan lega kya??" << endl;
        return;
    }

    --top;
    cout << "Element popped: " << mystack[top]
    << endl;
}

void peek()
{
    if (isEmpty())
    {
        cout << "Bache ki jaan lega kya??" << endl;
        return;
    }

    cout << "Akhein phaad ke dekhle: " << mystack[top] << endl;
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << mystack[i] << " " << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    display();
    peek();
    pop();
    display();

    return 0;
}