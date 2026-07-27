#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
   data =val;
   next=NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;
    List(){
        head=NULL;
        tail=NULL;
    
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
        }

        void push_back(int val){  //4 step
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
        }
    };
    void printList(Node* head){
    while(head != NULL){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
}
    
bool isCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"cycle/loop is present"<<endl;
            return true;
        }
    }
    cout<<"cycle/loop is not exist"<<endl;
    return false;
}


//TO REOVE CyCLE 
void removeCycle(Node* head){
    //cycle detect
    Node* slow=head;
    Node* fast=head;
    bool isCycle=false;
   while(fast != NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            cout<<"cycle exist"<<endl;
            isCycle=true;
            break;
        }
     }
      if(!isCycle){
        cout<<"cycle not exist";
        return;
      }

      slow=head;
      if(slow==fast){  //special condition: tail->head
        while(fast->next!=slow){
            fast=fast->next;
        }
        fast->next=NULL;//remove cycle
        //NOrmal condition
      } else{
        Node* prev=fast;
        while(slow!=fast){
            slow=slow->next;
            prev=fast;
            fast=fast->next;
        }
        prev->next=NULL;
      }

    //   //MERF SHORT IN LL    2 step
    //   Node* splitAtMid(Node* head){
    //     Node* slow=head;
    //     Node* fast=head;
    //     Node* prev=NULL;
    //     while(fast!=NULL&&fast->next!=NULL){
    //         prev=slow;
    //         slow=slow->next;
    //         fast=fast->next->next;
    //     }
    //     if(prev!=NULL){
    //         prev->next=NULL;
    //     }
    //     return slow;
    //   }
    //   // adding two ll in single ans ll   3 step
    //   Node* merge(Node* left, Node*right){
    //     List ans;
    //     Node* i=left;
    //     Node* j=right;
    //     while(i!=NULL&& j!=NULL){
    //         if(i->data<=j->data){
    //             ans.push_back(i->data);
    //             i=i->next;
    //         }else{
    //             ans.push_back(j->data);
    //             j=j->next;
    //         }
    //     }
    //     while(i!=NULL){
    //         ans.push_back(i->data);
    //             i=i->next;
    //     }
    //     while(j!=NULL){
    //         ans.push_back(j->data);
    //             j=j->next;
    //     }

    //   }
    //   return ans;
 
// //  1 STEP
//       void mergSort(Node* head){
//         if(head==NULL||head->next==NULL)
//         return;
      
//       Node* rightHead= splitAtMid(head);
//       mergSort(head);//left head
//       mergeSort(rightHead);//right head
//       merge(head, righthead)
//       }

}
int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next=ll.head;  //is use to get cycle exixt in loop
    //isCycle(ll.head);

    //removing part
    removeCycle(ll.head);
    printList(ll.head); 

    return 0;
}