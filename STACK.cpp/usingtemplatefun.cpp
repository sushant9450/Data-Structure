#include <bits/stdc++.h>
using namespace std;

template<class T>  //use to store any kind of variable(like integer,string,char,bool etc.)
class Stack{
    vector<T>vec;
public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack is empty";
           return;
        }
        vec.pop_back();
    }

    T top(){
         if(isEmpty()){
         cout<<"stack is empty";
        //    return -1;
   }
    int lastidx=vec.size()-1;
    return vec[lastidx];  
}

bool isEmpty(){
    return vec.size()==0;
}
};

int main() {
    Stack<char> s;  //a small change come to store any kind of value(<char>)
    s.push('c');
    s.push('b');
    s.push('a');

    // Stack<string> s;
    //  s.push("c");
    // s.push("x");
    // s.push("v");

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}