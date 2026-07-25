#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin,line);
    stringstream ss(line);
    int x;
    while(ss >> x){
        sum=sum+x;
        cout << x <<" ";
    }
    cout<<sum;
    return 0;
}