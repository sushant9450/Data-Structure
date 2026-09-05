#include <bits/stdc++.h>
using namespace std;

void Reverse(queue<int> &Q){

 stack<int> s;

 // Q se stack me dala
while (!Q.empty())
{
    s.push(Q.front());
    Q.pop();
}

//stack se kyu me dala revese order pane ke leye
while (!s.empty())
{
    Q.push(s.top());
    s.pop();
}
};

int main() {
    queue<int> Q;
    for(int i=1;i<=5;i++){
        Q.push(i);
    }
 
    Reverse(Q);
     for(int i=1;i<=5;i++){
       cout<<Q.front()<<" ";
        Q.pop();
     }
     cout<<endl;


    return 0;
}