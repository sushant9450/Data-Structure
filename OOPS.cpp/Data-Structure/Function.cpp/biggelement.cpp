#include<bits/stdc++.h>
using namespace std;
int sum (int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main(){
    int a[]={10,20,30,40,80,60,50,45};
     int total;
    total=sum(a,8);  /// int size of (arr)/size of(arr)
     cout<< " the max value in the array is "<< total ;
      return 0 ;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  