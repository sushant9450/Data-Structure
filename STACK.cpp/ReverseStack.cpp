#include <bits/stdc++.h>
using namespace std;
void pushAtBottom(stack<int> &s, int val){//0(n)

if(s.empty()){
    s.push(val);   //push at top=push at bottom
    return;
}
    int temp=s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
}

 void reverse(stack<int>&s){// original me change krne ke leye pass by reference krna padta hai
 if(s.empty()){
    return;
 } 


 int temp=s.top();
 s.pop();
 reverse(s);
 pushAtBottom(s,temp);
}


void printStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}
int main() {
    stack<int>s;

    s.push(3);
    s.push(2);
    s.push(1);

    printStack(s);
    reverse(s);
    printStack(s);


    

    return 0;
}