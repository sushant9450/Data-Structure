#include<bits/stdc++.h>
using namespace std;
void reverse(char word[],int n){
int str=0, end=n-1;
  while(str<end){
    swap(word[str],word[end]);   // swap(word[str++],word[end--]);  can be used
   str++;
   end--;
  }
}
int main(){
    char word[]="code";
    reverse(word,strlen(word));
    cout<<"reverse="<<word<<endl;
    return 0;
}