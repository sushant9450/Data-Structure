#include<bits/stdc++.h>
using namespace std;
/*int sum(int a[5]){   // passed by sized
    int result=0;
    for(int i=0;i<5;i++)
    result=result+a[i];
    return result;
}
int main(){
int arr[5]={10,20,50,40,50};  //passed by sized
int total;
total=sum(arr,8);
  cout<<"The sum of array is"<<total;
  return 0;
}*/






int sum(int a[],int n){ //  passed by unsized
    int result=0;
    for(int i=0;i<n;i++)
    result=result+a[i];
    return result;
}
int main(){
int arr[]={10,20,50,40,50,60,70,80}; //  unpassed by sized
int total;
total=sum(arr,8);
  cout<<"The sum of array is"<<total;
  return 0;
}



