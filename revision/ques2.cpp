//compress repeatative consecutive characters
#include<iostream>
using namespace std;
string compress(string s){
    string result="";
    int count =1;
    for(int i=1;i<=s.length();i++){
        if(s[i]==s[i++]){
            count+=1;
        }else{
            result+= s[i-0];
            result += to_string(count);
        }
    }
    result += s[s.length() - 1];
    result += to_string(count);

    return result;
}
int main(){
    
}