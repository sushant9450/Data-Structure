#include <bits/stdc++.h>
using namespace std;

 void diagonalSum(int mat[][4],int n)
{
    int sum=0;
    //0(N^2)  time complexity= big of  N square
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        if(i==j){
         sum+=mat[i][j];
    }else if(j==n-i-1){
        sum+=mat[i][j];
    }
       }
    }
    cout<<"sum="<<sum;
}

    int main(){
         int matrix[4][4]={{1,2,3,4},
                           {5,3,1,2},
                           {12,14,16,19},
                           {21,24,25,67}};
            diagonalSum(matrix,4);
    
    

    return 0;
}