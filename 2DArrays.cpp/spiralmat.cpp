#include<bits/stdc++.h>
using namespace std;
void spiralMatrix(int mat[][4],int n,int m){
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;

    while(srow<=erow && scol<=ecol){
   //top
    for(int j=scol;j<=ecol;j++){
        cout<<mat[srow][j]<<" ";
    }
    
    //Right
    for(int i=srow+1;i<=erow;i++){
        cout<<mat[i][ecol]<<" ";
    }

    //Bottom
    for(int j=ecol-1;j>=scol;j--){
       if(srow==erow){
        break;
       }
       cout<<mat[erow][j]<<" ";
    }
    
    //left
    for(int i=erow-1;i>=srow+1;i--){
        if(scol==ecol){
            break;
        }
        cout<<mat[i][scol]<<" ";
    }
     srow++; scol++;
     erow--; ecol--;
}    
cout<<endl;
}
int main(){
    int matrix[4][4]={{1,2,3,4},
                       {5,3,1,2},
                       {12,14,16,19},
                       {21,24,25,67}};
      
      spiralMatrix(matrix,4,4);
      return 0;                 
}



    




