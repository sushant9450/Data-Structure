#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //public:
    Node(int val){
        data=val;
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
            Node* newNode =new Node(val);
            
            if(head==NULL){
                head=tail=newNode;
            }else{
                newNode->next= head;
                head=newNode;
            }
    }

     void printList(){
        Node* temp =head;
        while(temp!=NULL){
            cout<<temp->data<<" ->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
    

    void pop_front(){  //delet item from front
    if(head==NULL){
        cout<<"LL is empty\n";
        return;
    }
    Node* temp=head;
    head=head->next;

    temp->next=NULL;
    delete temp;
    }

    void pop_back(){
        Node*temp=head;
        while(temp->next->next!=NULL){
             temp=temp->next;
        }
         //temp=temp->next;
         temp->next=NULL; //temp=previous tail
         delete tail;
         tail=temp;
        
    }

    //to search the index 
    int searchit(int key){
        Node*temp=head;
        int idx=0;
        while (temp!=NULL) {
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;  
    };

    //Recursive search
    int helper(Node* temp,int key){
        if(temp==NULL){
            return -1;
        }
        if(temp->data==key){
            return 0;
        }
        int idx=helper(temp->next,key);
        if(idx==-1){
            return -1;
        }
        return idx+1;
    }
    int searchrec(int key){
        return helper(head,key);
    }

    //reverse a linked list
    void revese(){
        Node*current=head;
        Node*prev=NULL;
        while(current!=NULL){
            Node*next=current->next;
            current->next=prev;

            //Updation for the itr
            prev=current;
            current=next;
        }
        head=prev;
    }
};

int main() {
 List ll; 
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();//1->2->3->NULL

    ll.revese();
    ll.printList();//5->4->3->2->1
    
    cout<<ll.searchit(2)<<endl;//index searching
    cout<<ll.searchrec(3)<<endl;//recursive search
    //  NICHE ABHI KO LINE WAISE SEARCH KRNA WRNA OUTPUT MR TODA CONFUSION HOGA
    //cout<<ll.seacrch(4)<<endl;
    // ll.pop_back();
    // ll.printList();  //1 ->2 ->NULL
    ll.pop_front();
    ll.printList();  //2->3->NULL

    //  cout<<ll.seacrch(4)<<endl;//ye index print kare ga
    return 0;
}
