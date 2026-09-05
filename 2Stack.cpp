#include <bits/stdc++.h>
#include<queue>
using namespace std;

class Queue{
    stack<int> st1;
    stack<int> st2;

public:

   void push(int data){   //O(N)
      //s1->s2
      while(!st1.empty()){
        st2.push(st1.top());
        st1.pop();
      }

      st1.push(data);

   //s2->s1;
   while(!st2.empty()){
    st1.push(st2.top());
    st2.pop();
   }
}

   void pop(){
    st1.pop();
   }

   int front(){
    return st1.top();
   }

   bool empty(){
    return st1.empty();
   }
};


int main() {
    //Queue using two stack

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    

    return 0;
}