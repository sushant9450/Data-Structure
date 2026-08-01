#include <bits/stdc++.h>
using namespace std;

template<class T>
class Stack{
    list<T>ll;

public:
    void push(T val){
        ll.push_front(val);
    }
      void pop(){
        ll.pop_front();
      }

      T top(){
        return ll.front();
      }

      bool isEmpty(){
        return ll.size()==0;
      }
};

int main() {
    Stack<int> s;  //a small change come to store any kind of value(<char>)
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout<<s.top()<<" ";  //1 2 3
        s.pop();
    }
    cout<<endl;
    return 0;
}


//Without using STL
// template<class T>
// class Node{
//     T data;
//     Node* next;
// public:
//     Node(int val){;
//     data=val;
//     next=NULL;
//     }
// };

// template<class T>
// class Stack{
//     Node<T>* head;

// public:
//    stack(){
//     head=NULL;
//    }
//    Node<T>* newNode=new Node(val);  //push  wala
//    if(head==NULL){
//       head=newNode;
//    }else{
//       newNode->next=head;
//       head=newNode;
//    }

//    void pop(){
//    Node<T>*temp=head;  //pop wala
//    head=head->next;
//    temp->next=NULL;
//    delete temp;
//    }

//    T top(){
//     return head->data;
//    }

//    bool isEmpty(){
//      return head=NULL;
//    }

// };
//   int main(){
//     Stack<int>s;

//     s.push(3);
//     s.push(2);
//     s.push(1);

//     while(!s.isEmpty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }

