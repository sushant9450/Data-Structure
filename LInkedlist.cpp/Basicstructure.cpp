#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    //public:
    Node(int val){
        data=val;
        next=NULL;
    }

//(node ka destructor kyu) kyuki node hi to wo data hai jisko hmne dynamicaly store kiy hai 
// ~Node wale ko hm delete function use  krne ke leye kr skte hai
    ~Node(){ // ye wala hm is leye use kr rha hai taki agar phele node ke bad or node ho to wo delete ho sake
        cout<<"~Node"<<data<<endl;
        
        if(next!=NULL){ //mtlb phele ye check kro ki isk address null to nhi na hai,niche wali line pado
           
        delete next; //ager wo null ke barabar nhi hai to phelee uske next wale ko delete kro tb usko delete krna
        next=NULL;
        }
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

//~list ye wala bhi delete ka part hai
    ~List(){  //destructor
        cout<<"~List\n";
        if(head!=NULL){
            delete head;
            head=NULL;
        }
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
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
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

    void insert(int val,int pos){
        Node* newNode=new Node(val);
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"position is invalid\n";
            }
           // return;
        }
        temp=temp->next;
    
    newNode->next=temp->next;
    temp->next=newNode;
    }


    //RVERSE A LINKED LIST(curr=curent,prev=previous)

    void reverse(){
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    head=prev;
    }

    //To remove Nth term from end
    int getSize(){
        int sz=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }
        return sz;
    }
    void removeNth(int n){
        int size=getSize();
        Node*prev=head;
        for(int i=0;i<(size-n);i++){
            prev=prev->next;
        }
        Node* toDel=prev->next;
        cout<<"going to delete:"<<toDel->data<<endl;
        prev->next=prev->next->next;
    }
};
int main() {
List ll;
    ll.push_front(5); 
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();  //1->2->3->4->5->NULL

    //revesrse wala
    ll.reverse(); //5->4->3->2->1->NULL
    ll.printList();

    //remove nth term wala;
    ll.removeNth(2);
    ll.printList();
    

    // ll.push_back(6);
    // ll.push_back(7);
    // ll.printList();


//     ll.insert(100, 0); // start
// ll.insert(200, 3); // middle
// ll.insert(300, 6); // end ke aas paas
     
    // ll.insert(100,2);
    // ll.printList(); //1->2->100->3->->4->5


    // ll.push_front(8);
    // ll.printList();
    
    // ll.insert(100, 2);
    // ll.printList(); //1->2->100->3->->4->5

    

    return 0;
}