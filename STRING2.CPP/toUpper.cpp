#include<bits/stdc++.h>
using namespace std;
void toUpper(char word[],int n){
  for(int i=0;i<n;i++){
    char ch=word[i];  //current value (jispe wo abhi hai)
  if(ch>='A'&& ch<='Z'){
    continue;
  }else{
    word[i]=ch-'a'+'A';
  }
  }
}

int main(){
    char word[]="sushAnt";
    toUpper(word,strlen(word));
    cout<<word;
    return 0;
}