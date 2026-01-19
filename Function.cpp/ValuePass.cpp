#include<bits/stdc++.h>
using namespace std;

//BY REFERENCE
void SWAP(int *a,int *b){
   int t;
   t=*a;
   *a=*b;
    *b=t;
}
int main(){
int a,b;
cin>>a>>b;
SWAP(&a,&b);
cout<<"swapping value" <<a<<" "<<b;
return 0;
}



//BY VALUE

// void SWAP(int a,int b){
//    int t;
//    t=a;
//    a=b;
//    b=t;
// }
// int main(){
// int a,b;
// cin>>a>>b;
// SWAP(a,b);
// cout<<"swapping value" <<a<<" "<<b;
// return 0;
// }