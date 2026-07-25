#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> A={1,2,3,4,5};
     set<int> B={4,5,6,7,8};
     set<int> set1;
    set_union(A.begin(),A.end(),B.begin(),B.end(),
    inserter(set1,set1.begin()));

    set_intersection(A.begin(),A.end(),B.begin(),B.end(),
     inserter(set1,set1.begin()));
    for(auto it:set1){
        cout<<it<<" ";
    }

    return 0;
}