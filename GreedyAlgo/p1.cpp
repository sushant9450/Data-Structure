#include <bits/stdc++.h>
using namespace std;

int maxActivities(vector<int> start, vector<int> end){
    // sort on end time
    //Ao selected
    cout<<"selcting A0\n";
    int count =1; //1 isleye kyuki Ao selcted hai
    int CurrEndTime=end[0];

    for(int i=0;i<start.size();i++){   // end.size bhi use kr sakte hai
       if(start[i] >= CurrEndTime){  // checking non-overlapping
        cout<<"selcting A"<<i<<endl;
        count++;
        CurrEndTime=end[i];
       }
    }
    return count;

}
int main() {
 vector<int> start={1,3,0,5,8,5};
 vector<int> end={2,4,6,7,9,9};   //4
    cout<<maxActivities(start,end)<<endl;

    return 0;
}