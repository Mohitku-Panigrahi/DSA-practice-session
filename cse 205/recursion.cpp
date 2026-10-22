#include<bits/stdc++.h>
using namespace  std;
// void printn(int n){
//     if(n==0){
//         return;
//     }
//     printn(n-1); // 1 2 3 4 5
//     cout<<n<<" ";
//     // printn(n-1); // 5 4 3 2 1 
// }
int sumn(int n){
    int sun=0;
    if(n==0){
        return 0;
    }
    sun =n+ sumn(n-1);
    
    return sun;
    
    
    
}
int main(){
    // printn(5);
    cout<<sumn(5);
    return 0;
}