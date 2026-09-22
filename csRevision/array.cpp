// #include<iostream>
// using namespace std;
// int main(){

// }
#include<iostream>
using namespace std;
void traversal(int arr[],int n){
    for(int i=0;i <n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[5]={1,2,3,4,5};
    int n=size(arr);
    // for(int i=0;i <=n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    traversal(arr,n);
}