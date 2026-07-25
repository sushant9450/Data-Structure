// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[][3]={{4,7,8},{8,8,7}};
//     int n=2,m=3;
//     int countof7=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if (int (arr[i][j]==7)){
//             countof7++;
//         }
//     }
// }
// cout<<"count of 7 is:"<<countof7<<endl;
// return 0;
// }



#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 10; i++) {          // outer loop → table number
        cout << "Table of " << i << endl;

        for (int j = 1; j <= 10; j++) {      // inner loop → multiply
            cout << i << " x " << j << " = " << i * j << endl;
        }

        cout << endl; // ek table ke baad gap
    }

    return 0;
}
