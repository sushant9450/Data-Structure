#include <bits/stdc++.h>
 #include<list>
 #include<iterator>
using namespace std;

void printList(list<int>ll){
    list<int>::iterator itr;
    for(itr=ll.begin();itr!=ll.end();itr++){
        cout<<(*itr)<<"->";
    }
    cout<<"NULL"<<endl;
}
int main() {
  list<int>ll;
  ll.push_front(2);
  ll.push_front(1);

  ll.push_back(3);
  ll.push_back(4);
  printList(ll);

  cout<<ll.size()<<'\n';
  ll.insert(3,6,2);
  printList(ll);

  cout<<"head ="<<ll.front()<<'\n';
  cout<<"tail  ="<<ll.back()<<'\n';

//   ll.pop_front();
  ll.pop_back();
  printList(ll);



    return 0;

}