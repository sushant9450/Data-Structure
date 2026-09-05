#include <bits/stdc++.h>
#include <deque>
using namespace std;

class Queue{
    //queue<int> deq; ye wrong ho jaye kyuki push back kam nhi kare ga, ye use krte to push() se kam chal jata
    deque<int> deq;

public:
     void push(int data){
        deq.push_back(data);
     }

     void pop(){
        deq.pop_front();
     }
     int front(){
        return deq.front();
     }
     
     bool empty(){
        return deq.empty();
     }
};

int main() {
    Queue q;
    for(int i=1;i<=5;i++){
        q.push(i);
       }

       for(int i=1;i<=5;i++){
        cout<<q.front()<<endl;
       q.pop();
       }


    return 0;
}