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
void insertEle(int arr[], int n, int pos, int no){
    for(int i=n; i>pos; i--){
        arr[i]=arr[i-1];
    }//right to left as we are covering a blank from last by before ele then inseeting new
    arr[pos]= no;

}
void deleteEle(int arr[], int n, int pos){
    for(int i=pos; i<n; i++){
        arr[i]=arr[i+1];
    }//here we go left to right as we delete and then we need to cover the blank so 
    

}
void mergesort(int arr1[],int n1, int arr2[],int n2, int c[]){
    for(int i=0;i<n1;i++){
        c[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        c[n1 + i ]=arr1[i];
    }
    for(int i=0; i<n1+n2-1;i++){
        for(int j=0;j<n1+n2-1-i;j++){
            if(c[j]>c[j+1]){
                int temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
}
int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}
int binary(int arr[],int n, int key){
    int low=0;
    int high= n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]==key){
            return arr[mid];
        }
        else if(arr[mid]<key){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }return -1;
}
void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    insertEle(arr,n,3,8);
    n++;
    traversal(arr,n);
    deleteEle(arr, n, 2);
}