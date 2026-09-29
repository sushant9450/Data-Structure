#include <bits/stdc++.h>
using namespace std;
struct node
{
    char data;
    struct node *left;
    struct  node *right;    
};
node* MakeNode(char x)
{
    node *p;
    p=new node;
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
};

/********************** */
void ProOrder(node *T)   //T==ROOT
{
    if(T!=NULL)
    {
        cout<<T->data<<", ";
        ProOrder(T->left);
        ProOrder(T->right);
    }
};

/********************* */
void InOrder(node *T)
{
    if(T!=NULL)
    {
        InOrder(T->left);
        cout<<T->data<<", ";
        InOrder(T->right);
    }
};

/******************** */
void PostOrder(node *T)
{
    if(T!=NULL)
    {
        PostOrder(T->left);
         PostOrder(T->right);
        cout<<T->data<<", ";
        
    }
};


int main() {
  node *root=NULL;
  root=MakeNode('A');
root->left=MakeNode('B');
root->right=MakeNode('C');

root->left->left=MakeNode('F');
root->right->left=MakeNode('D');
root->right->right=MakeNode('E');
cout<<"Preorde Traversal :=>";
ProOrder(root);
cout<<endl;
cout<<"InOrder Traversal :=>";
InOrder(root);
cout<<endl;
cout<<"PostOrder Traversal :=>";
PostOrder(root);
    return 0;
}