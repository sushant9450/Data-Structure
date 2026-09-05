#include <bits/stdc++.h>
#include <queue>
using namespace std;

void InterLeave(queue<int> &org){// islye passby refrence k rha hai kyuki hme orginal Q me change krna hai bina koi exrtra Q banaye First wale Q ko chod kr

 int n=org.size();
queue<int>First;

//as teh size is even hm starting me half element org ke first me push kare ge
//1-2-3-4-5-6-7-8-9-10  
for(int i=0;i<n/2;i++){
    First.push(org.front());   // 1-2-3-4-5
    org.pop();
}

//ab org me last ke half element bache honge unke bad first wale a jaye ge push krne se
while(!First.empty()){        
    org.push(First.front());   // 6-7-8-9-10-1-2-3-4-5
    First.pop();

// ab jo starting ke element hai org me unse first ke piche krna hai and pop krte jana hai
    org.push(org.front());   // 1-2-3-4-5-6-7-8-9-10   
    org.pop();
}
};

int main() {
    queue<int>org;
    for(int i=1;i<=10;i++){
        org.push(i);
    }

    InterLeave(org);

   for(int i=1;i<=10;i++){
    cout<<org.front()<<" ";
    org.pop();
   }
   cout<<endl;

    return 0;
}