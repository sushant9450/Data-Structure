#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int>A={1,2,5,4,3};
    set<int>B={6,7};
    //SUBSET
    includes(A.begin(),A.end(),B.begin(),B.end())?
    cout<<"Subset"<<endl:cout<<"Not a subset"<<endl;

     //ACCUMULATE(sum)
     int sum=accumulate(A.begin(),A.end(),0);
     cout<<sum<<endl;
    // cout<<accumulate(A.begin(),A.end(),0);

    //Maxmum value
    int max=*max_element(A.begin(),A.end());
    cout<<max<<endl;
     //cout<<*max_element(A.begin(),A.end());

     //Minimum value
    int min=*min_element(A.begin(),A.end());
    cout<<min<<endl;

    // Union of sets
    set<int> set1;
    set_union(A.begin(),A.end(),B.begin(),B.end(),inserter(set1,set1.begin()));
    for(auto i:set1){
        cout<<i<<" ";
    }
    cout<<endl;

    //Sorting a set
     vector<int>new_vec(A.begin(),A.end());
     sort(new_vec.begin(),new_vec.end());
     for(auto t:new_vec){
        cout<<t<<" ";
     }
     cout<<endl;

     
     // Sorting in descending order
    vector<int>e_vec(A.begin(),A.end());
     sort(e_vec.begin(),e_vec.end(),greater<int>());
     for(auto e:e_vec){
        cout<<e<<" ";
     }

    return 0;
}