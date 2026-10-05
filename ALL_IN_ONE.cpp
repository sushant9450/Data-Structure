#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    //char data;
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


/***************No. of Node*********/
int Countnodes(node* T){
if(T==NULL){
return 0;
}
else
return Countnodes(T->left)+Countnodes(T->right)+1;
};



/***********No. of leaf***** */
int CountLeaf(node *T)
{
    if(T==NULL)
    return 0;
    else if(T->left==NULL && T->right==NULL)
    return 1;
    else
    return CountLeaf(T->left)+CountLeaf(T->right);
}

/***********No. of 2 child */
int CountN2(node *T)
{
    if(T==NULL)
    return 0;
    else if(T->left==NULL && T->right==NULL)
    return 0;
    else if (T->left!=NULL && T->right!=NULL)
      return CountN2(T->left)+CountN2(T->right)+1;
      else
      return CountN2(T->left)+CountN2(T->right);
} 
   
/***********No. of 1 child */
int CountN1(node *T)
{
  if(T==NULL)
    return 0;
    else if(T->left==NULL && T->right==NULL)
    return 0;
    else if (T->left!=NULL && T->right!=NULL)
      return CountN2(T->left)+CountN2(T->right);
      else
      return CountN2(T->left)+CountN2(T->right)+1;
}

/****************STRICTLY TREE */
int IsStrictly(node *T)
{
    if(T->left==NULL && T->right==NULL)
    return true;
    else if (T->left!=NULL && T->right!=NULL)
    // return IsStrictly(T->left)&&(T->right);
    return false;
}

/**********Height OF the TREE */
int Height(node *T)
{
    if(T==NULL){
        
        return 0;
    }
    int LH=Height(T->left);
    int RH=Height(T->right);
    return 1+max(LH,RH);
}

int ISCompleteBT(node *T)
{
   int N=Countnodes(T);
   int H=Height(T);
 
   int x=pow(2,H+1);
   if(N==x-1)
   return true;
   else 
   return false;
};

/**********SUM of Nodes ********/
  int sum(node* T)
  {
    if(T==NULL){
    return 0;
    }
    else 
    return T->data+sum(T->left)+sum(T->right);
  }

  /**************GENERAL TREE MAKING */
  void CreateTree(node *T)
  {
    int choice;
    cout<<"Whether the left of"<<T->data<<"exists?(1/0)";
    cin>>choice;
    if(choice==1)
    {
        int x;
        cout<<"Enter the data of the left node";
        cin>>x;
        node *p=MakeNode(x);
        T->left=p;
        CreateTree(p); // ye wali line process ko har node ko repeat krne ke leye ki gye hai
    }

     cout<<"Whether the right of"<<T->data<<"exists?(1/0)";
    cin>>choice;
    if(choice==1)
    {
        int x;
        cout<<"Enter the data of the right node";
        cin>>x;
        node *p=MakeNode(x);
        T->right=p;
        CreateTree(p);  // ye wali line process ko har node ko repeat krne ke leye ki gye hai
    }
  }

int main() {
node *root=NULL;
int x;
cout<<"Enter the root of the data";
cin>>x;
root=MakeNode(x);
CreateTree(root);
// root=MakeNode('A');
// root->left=MakeNode('B');
// root->right=MakeNode('C');
// root->left->left=MakeNode('F');
// root->right->left=MakeNode('D');
// root->right->right=MakeNode('E');
cout<<"Preorde Traversal :=>";
ProOrder(root);
cout<<endl;
cout<<"InOrder Traversal :=>";
InOrder(root);
cout<<endl;
cout<<"PostOrder Traversal :=>";
PostOrder(root);
cout<<endl;


cout<<"No of nodes = "<<Countnodes(root);
cout<<endl;

cout<<"No of Leaf nodes = "<<CountLeaf(root);
cout<<endl;

cout<<"2 Child Node = "<<CountN2(root)<<endl;
cout<<endl;

cout<<"1 Child Node = "<<CountN1(root)<<endl;
cout<<endl;

cout<<"Is Strictly = "<<IsStrictly(root)<<endl;
cout<<endl;

cout<<"Height of the Tree = "<<Height(root)<<endl;
cout<<endl;

cout<<"Is Complete Binary Tree = "<<ISCompleteBT(root)<<endl;
cout<<endl;

cout<<"Sum of the nodes are = "<<sum(root)<<endl;;
cout<<endl;
    return 0;
}