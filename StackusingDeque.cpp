#include <bits/stdc++.h>
using namespace std;
class Stack{
    deque<int> s;

public:
    void push(int data){
        s.push_front(data);
    }

    void pop(){
        s.pop_front();
    }

    int top(){
        return s.front();
    }

};

int main() {
    Stack Q;
    for(int i=1;i<=5;i++){
        Q.push(i);
    }
 
     for(int i=1;i<=5;i++){
       cout<<Q.top()<<" ";
        Q.pop();
     }   //5-4-3-2-1
     cout<<endl;

    return 0;
}