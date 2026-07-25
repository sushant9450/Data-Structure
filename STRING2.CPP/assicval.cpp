#include<bits/stdc++.h>
using namespace std;
int main(){
    int K,N,M;
    cin>>K>>N>>M;
    string S;
    cin>>S;
    int count=0;
    for(int i=0;i<=K;i++){
        int assicvalue=int(S[i]);      // S[i] character ko ASCII value me convert kiya
        // Example: 'A' = 65, 'a' = 97
  // considering h as a assic value
        if(assicvalue>= N &&  assicvalue <= M){
            count++;
        }
    }
    cout<<count;
    return 0;
}