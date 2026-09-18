#include<bits/stdc++.h>
using namespace std;
int main(){
/*int a[10],i,max;
    for(i=0;i<10;i++){
        
            cin>>a[i];
    }
        
   max=a[0];

   for(i=1;i<10;i++){
    if(a[i]>max)
    {
        max=a[i];
    }
   }
   cout<<max<<endl;
   return 0;
}*/
int a[10],i,min;
    for(i=0;i<10;i++){
        
            cin>>a[i];
    }
        
   min=a[0];

   for(i=1;i<10;i++){
    if(a[i]<min)
    {
        min=a[i];
    }
   }
   cout<<min<<endl;
   return 0;
}
    