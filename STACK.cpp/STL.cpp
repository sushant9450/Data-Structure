
#include <bits/stdc++.h>
#include<stack>
using namespace std;

template<class T>
class Node{
    T data;
    Node* next;
public:
    Node(int val){;
    data=val;
    next=NULL;
    }
};

template<class T>
class Stack{
    Node<T>* head;

public:
   stack(){
    head=NULL;
   }
   Node<T>* newNode=new Node(val);  //push  wala
   if(head==NULL){
      head=newNode;
   }else{
      newNode->next=head;
      head=newNode;
   }

   void pop(){
   Node<T>*temp=head;  //pop wala
   head=head->next;
   temp->next=NULL;
   delete temp;
   }

   T top(){
    return head->data;
   }

   bool isEmpty(){
     return head=NULL;
   }

};
  int main(){
    stack<int>s;    //STL  stack s will be in small

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.empty()){   //stl wil use empty
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

