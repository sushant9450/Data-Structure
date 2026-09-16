#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>p1, pair<int,int>p2){
    return p1.second<p2.second;  //end time assecnding order ke basis pe
    //return p1.second>p2.second;   //end time decending order ke basis pe

    // return p1.first<p2.first;  //start time assecnding order ke basis pe
    // return p1.first>p2.first;    //start time decending  order ke basis pe
}
int main() {
 vector<int> start={0,1,2};
 vector<int> end={9,2,4};  
 
 vector<pair<int,int>> activity(3,make_pair(0,0));   //3 pair bane ge and initialy hmne use 0 mana hai
 activity[0] = make_pair(0,9);
 activity[1] = make_pair(1,2); 
 activity[2] = make_pair(2,4);

 for(int i=0;i<activity.size();i++){     //i<=activity  ek garbage value bhi produce hogi
    cout<<"A"<<i<<": "<<activity[i].first<<" ,"<<activity[i].second<<endl;
 }
 
 cout<<"--------Sorted---------"<<endl;
 sort(activity.begin(),activity.end(),compare);

  for(int i=0;i<activity.size();i++){     
    cout<<"A"<<i<<": "<<activity[i].first<<" ,"<<activity[i].second<<endl;
 }

 
    return 0;
}