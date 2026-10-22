#include<iostream>
using namespace std;
int main(){
    int n,d,s;
    cin>>n;
    s=n;
    int rev=0;
    while(n>0){
        d = n%10;
        rev= rev*10 + d;
        n= n/10;
    }
    if(rev==s){cout<<"palindrone";}else{cout<<"Not";}
}