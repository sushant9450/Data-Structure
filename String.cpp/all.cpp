#include<bits/stdc++.h>
using namespace std;
int main(){
   /* string str="AB12@49Fu#";
    for(char ch:str){
       if(isalpha(ch)){
            cout<<ch;
        }
      if(isdigit(ch)){
        cout<<ch<<endl;
      }
      /*if(isupper(ch)){
        cout<<ch;
      }
      if(islower(ch)){
        cout<<ch;
      }*/
    
     /*str.replace(3,3,"I");
    cout<<str<<endl;
     return 0;*/

    /*cout<<str.substr(3);*/

   /* str.find("A");
    cout<<str;
    return 0;*/
   /*str.remove(0,"A");
   cout<<str;
   return 0;*/


 string str="SUSHANT SINGH";
 int sum=0;
 int a;
  for(char ch:str)
  {
    a=int(ch);
    int sum=sum+a;
  }
  if(sum%2==0){
    cout<<"simple";
  }else{
    cout<<"complex";
   // return 0;
  }
  return 0;
}





