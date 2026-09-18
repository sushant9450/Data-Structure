#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout << " " ;
        }
           for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }

        cout<<endl;
    }
        for(int i=4;i>=1;i--){
            for(int j=4;j>=i;j--){
                cout<<" ";

            }
            for(int j=1;j<=(2*i-1);j++){
                cout<<"*";
            }
            cout<<endl;
        }
    
    return 0;
}



                                          /* }
                                                  for(int j=1; j<=i; j++){
                                                 cout << "*" << " ";
                                                 }
                                                  for(int j=2; j<=i; j++){
                                                  cout << "*" << " ";
                                                 }
                                                      for(int j=1; j<=(n-i); j++){
                                                          cout << " " << " ";
                                                      }
                                                 cout << endl;*/
                           
       /* for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }

        cout<<endl;
    }
        for(int i=4;i>=1;i--){
            for(int j=4;j>=i;j--){
                cout<<" ";

            }
            for(int j=1;j<=(2*i-1);j++){
                cout<<"*";
            }
            cout<<endl;
        }
    
    return 0;
}*/



