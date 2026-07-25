#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int, greater<int>> ab={1,2,4,5,6};
    for(auto c:ab){
        cout<<c<<" ";
    }
    cout<<endl;// ye wala is lye lagay taki 10 ke sath phele wala output print na ho

    ab.insert(10);
    for(auto i:ab){
        cout<<i<<" ";
    }
    cout<<endl;//  same uper wale ki tara ye wala is lye lagay taki 10 ke sath phele wala output print na ho

    ab.find(4)!=ab.end()?cout<<"Found"<<endl:cout<<"not found"<<endl;
     

    ab.erase(4); 
    for(auto z:ab){
        cout<<z<<" ";

    }

     cout<<ab.size()<<endl;
     
     ab.find(4)!=ab.end()?cout<<"Found":cout<<"not found";
     

    return 0;
}