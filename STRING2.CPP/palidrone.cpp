#include<bits/stdc++.h>
using namespace std;
 bool isPalidrone(char str[],int n){
    int st=0, end=n-1;
    while(st<end){
        if(str[st++]!=str[end--]){
            cout<<"not Palidrone\n";
            return false;
        }else{
            cout<<"is Palidrone\n";
            return true;
        }
    }
 }
 int main(){
    char word[]="hello";
    isPalidrone(word,strlen(word));
    return 0;
 }