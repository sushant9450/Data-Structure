#include<bits/stdc++.h>
using namespace std;
int main(){
   string S;
    cin>>S;
    int N,K;
    cin>>N>>K;
    string result=S.substr(K,N-2*K);
    cout<<result;
    return 0;
}

/*char str1[100];
strcpy(str1,"appna clooege");
cout<<str1<<endl;
return 0;
}*/