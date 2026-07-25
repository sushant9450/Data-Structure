#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> A = {2,4,1,3,5};
    set<int> B = {1,2,3,4,5};
    set<int> C = {5,5,3,6,7};
    set<int> s1, s2;
    set_intersection(
        A.begin(), A.end(),
        B.begin(), B.end(),
        inserter(s1, s1.begin())
    );

    set_intersection(
        s1.begin(), s1.end(),
        C.begin(), C.end(),
        inserter(s2, s2.begin())
    );

     
    for(auto x : s2)
    {
        cout << x << " ";
    }

    return 0;
}