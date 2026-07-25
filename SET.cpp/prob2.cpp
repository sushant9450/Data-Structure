#include <bits/stdc++.h>
using namespace std;

int main() {

    int N,M;
    cin>>N>>M;
    string s1,s2;
    cin>>s1>>s2;
     set<char> d1;
     set<char> d2;
     for(char ch:s1){
        d1.insert(ch);
     }
     for(char ch:s2){
        d2.insert(ch);
     }

     int count=0;
     for(char ch:d1){
//        set_intersection(
//     d1.begin(), d1.end(),
//     d2.begin(), d2.end(),
//     inserter(result, result.begin())
// );;

        if(d2.find(ch)!=d2.end()){
            count++;
        }
    }
cout<<count<<endl;
    

    return 0;
}