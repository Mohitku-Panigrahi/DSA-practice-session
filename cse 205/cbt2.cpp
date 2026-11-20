#include <iostream>
using namespace std;

#define MAX=5

int stack[MAX];
int top = -1;

void push(int x){
    if (top= MAX-1)
    {
        cout<<"Over fit"<<endl;
    }
    top+=1;
    stack[top]=x;
}
