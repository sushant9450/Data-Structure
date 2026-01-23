    #include<bits/stdc++.h>
    using namespace std;
//  int firstOccur(vector<int> arr,int i,int target){
//     if(i==arr.size()){   // pura array me gum liya lekin wo particular nhi mili 
//         return -1;
//     }
//     if(arr[i]==target){
//         return i;
//     }

//     return firstOccur(arr,i+1,target);
//  }
//  int main (){
//     vector<int> arr={1,2,3,3,3,4,4};
//     cout<<firstOccur(arr,0,3)<<endl;
//  }



  
 
 void lastOccur(vector<int> &arr,int target,int i,int &idxfound){
    if(i>=arr.size())
     return;
   if(arr[i]==target)
    idxfound=i;
   lastOccur(arr,target,i+1,idxfound);
   }
   int main(){
    vector<int> arr={1,2,3,3,3,4};
    int idxfound=-1;
    lastOccur(arr,3,0, idxfound);
    cout<<idxfound;
   return 0;
  }
