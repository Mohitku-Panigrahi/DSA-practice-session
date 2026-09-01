// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[4]=[10,20,30,40];
//     int max_len=5;
//     int int_plc,int_ele;
//     cout<< "Enter insert pos: ";
//     cin>>int_plc;
//     cout<<"Enter element : ";
//     cin>> int_ele;
//     int arr1[max_len];
//     for(int i=max_len-1;i<0;i--){
//         int arr1[i-1]= arr[i-2];
//         arr[max_len-1]=50;
//     } 

// }
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40};
    int max_len = 5;

    int int_plc, int_ele;

    cout << "Enter insert pos: ";
    cin >> int_plc;

    cout << "Enter element: ";
    cin >> int_ele;
    for (int i = max_len - 1; i > int_plc; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[int_plc] = int_ele;

    
    cout << "Array after insertion: ";

    for (int i = 0; i < max_len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
 
// for(int i=max_plc-1;i>int_plc;i--) arr[i]=arr[i-1];

