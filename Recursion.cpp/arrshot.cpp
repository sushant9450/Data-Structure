#include<bits/stdc++.h>
using namespace std;
bool isShorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isShorted(arr,n,i+1);
}
int main(){
    int arr1[5]{1,2,3,4,5};
    int arr2[5]{1,2,4,3,5};
    cout<<isShorted(arr1,5,0); //1  // cout<<isShorted(arr2,5,0);  //0
    return 0;
}      