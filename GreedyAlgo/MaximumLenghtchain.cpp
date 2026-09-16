#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2){  //3->step
    return p1.second<p2.second;
}


int maxlenghtchain(vector<pair<int,int>>pairs){   //2->step
    int n=pairs.size();

    sort(pairs.begin(),pairs.end());
    
    int ans=1;
    int currend=pairs[0].second;

    for(int i=1;i<n;i++){
        if(pairs[i].first >currend){   // checking non-overlapping
            ans++;
            currend=pairs[i].second;
        }
    }
    cout<<"maximum Length = "<<ans<<endl;
    return ans;
}

int main() {

   int n=5;
    vector<pair<int,int>>pairs(n,make_pair(0,0));   //1->step
    pairs[0]=make_pair(5,24);
    pairs[1]=make_pair(39,60);
    pairs[2]=make_pair(5,28);
    pairs[3]=make_pair(27,40);
    pairs[4]=make_pair(50,90);

  maxlenghtchain(pairs);
    

    return 0;
}