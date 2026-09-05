#include <bits/stdc++.h>
using namespace std;

void FirstNonrepeat(string str){    ///O(N) both time and space
    queue<char> Q;
    int freq[26]={0};

    for(int i=0;i<str.size();i++){
        char ch=str[i];
        Q.push(ch);
        freq[ch-'a']++;

        while(!Q.empty() && (freq[Q.front()-'a']>1)){
            Q.pop();
        }
        if( Q.empty()){
            cout<<"-1\n";
        }else{
            cout<<Q.front()<<"\n";
        }
    }
}

int main() {

    string str="aabccxb";
    // cin>>str;
    FirstNonrepeat(str);

    return 0;
}