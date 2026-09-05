#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main() {
deque<int> deq;


deq.push_front(2);  //2
deq.push_front(1);  //1-2

//3-4
deq.push_back(3);   //3
deq.push_back(4);   //3-4
//1-2-3-5

deq.pop_front();    //1
deq.pop_back();     //4

cout<<deq.front()<<"\n";
cout<<deq.back()<<"\n";

    return 0;
}