#include<bits/stdc++.h>
using namespace std;
int main (){ 
    /*for(int i=1; i<=10;i++){
        if (i==3){
            continue;
        }
        cout <<i<<endl;
    }*/
   int n =5;
   bool isPrime =true;
   for(int i =2; i<=sqrt(n); i++){  //n-1,
     if(n%i==0){
     isPrime =false;
          break ;
   }
  }
  if (isPrime){
  cout<<"number is  Prime"<<endl;
}else{ 
  cout<<"number is not Prime"<<endl;
}
    return 0;

    }

    
    
    
    
    
    
    
    
    
    
    