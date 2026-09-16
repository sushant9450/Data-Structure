#include <bits/stdc++.h>
using namespace std;

bool compare(pair<double,int>p1, pair<double,int>p2){  //O(n+nlogn+n)   ==O(nlogn)
    return p1.first>p2.first;
}; 

int FractionalKnapsack(vector<int>val, vector<int>wt, int W){
    int n=val.size();
    vector<pair<double,int>>ratio(n,make_pair(0.0,0));  //pair(ratio,index)

    for(int i=0;i<n;i++){
        double r=val[i]/(double)wt[i];
        ratio[i]=make_pair(r,i);  //r ratio hai i index hai wal ki
    }
    sort(ratio.begin(),ratio.end(),compare); //desending order
      
    int ans=0;

for(int i=0;i<n;i++){
    int idx=ratio[i].second;   // first pe ratio hai and second pe index hai 
    if(wt[idx]<=W){
        ans+=val[idx];
        W-=wt[idx]; 
    }else{
        ans+=ratio[i].first*W;
        W=0;
        break;
    }
}
cout<<"max-val = "<<ans<<endl;
return ans;
}
int main() {
  vector<int> val={60,100,120};
 vector<int> wt={10,20,30};   
 int W=50;
    
FractionalKnapsack(val,wt,W);
    return 0;
}