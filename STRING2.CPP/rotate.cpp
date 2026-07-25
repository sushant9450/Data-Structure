#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin>>S;
    int N;
    cin>>N;
    int K;
    cin>>K;
    string res= string.substring(N-K,K)- (string.substring(0,N-K));
     cout<<res;
   


}