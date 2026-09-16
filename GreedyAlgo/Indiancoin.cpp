#include <bits/stdc++.h>
using namespace std;
 
int minimumchange(vector<int>coin,int V){
    int ans=0;
    int n=coin.size();

    for(int i=n-1;i>=0 && V>0;i--){
        if(V>=coin[i]){
            ans+=V/coin[i]; //divide krke check kiya kitne coin lage ge
            V=V%coin[i]; // kitne or bache hai coin
        }
    }
    cout<<"minimum change required = "<<ans<<endl;
}
int main() {

    vector<int>coin={1,2,5,10,20,50,100,500,2000};  //O(n)
    int V=590;

    minimumchange(coin,V);

}