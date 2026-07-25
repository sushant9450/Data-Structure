/*#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
if(n==0||n==1){
    return n;
}
return fibo(n-1)+fibo(n-2);
}
int main(){
cout<<fibo(10)<<endl;
return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n) {
    if (n == 0||n==1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    int size;
    cin >> size;
    cout << "The fibonacci series is ";
    for (int i = 0; i < size; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}

