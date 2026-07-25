#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,j;
vector<int>num(10);//{1,2,3,4,5};                 vector<int>num{25,45,67,89,90}    
    for( i=0;i<10;i++){                          //for(i=0;i<num.size();i++)
        cin>>num[i];
    }
    num.push_back(42);//push-to insert new element
    num.push_back(63);
    num.at(1)=9;//changing element
    num.at(5)=11;
    num.pop_back();//pop to remove one by one from last;cannot use empathy 
    for(i=0;i<12;i++){//for(i=0;i<12;i++)
        cout<<num[i]<<" ";
    }
    cout << endl;
    cout<<"element at"<<num.at(10);//telling vetor position//agar index wo print karwa rahe hai jo hai hi nhi to garbbage value aye gi
   // num.at(1)=9;
    //num.at(5)=11;
    return 0;
}