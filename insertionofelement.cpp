#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40};
    int max_len = 5;

    int int_plc, int_ele;

    cout << "Enter insert pos: ";
    cin >> int_plc;

    cout << "Enter element: ";
    cin >> int_ele;
    for(int i=max_len-1;i>= int_plc;i--){
        arr[i]=arr[i-1];
    }
    arr[int_plc]= int_ele;
    cout<<"The element out:";
    for (int i = 0; i < max_len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}