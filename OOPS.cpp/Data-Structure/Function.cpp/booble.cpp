// #include<bits/stdc++.h>
// using namespace std;
// int bubbleshot(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;i++){
//             if(arr[j]>arr[j+1]){
//              int temp=arr[j];
//              arr[j]=arr[j+1];
//              arr[j+1]=temp;
//             }
//         }
//     }
//     return arr[n-1];
// }
// int main()
// {
//     int a[] = {15, 20, 25, 30, 35, 40, 50, 60};
//     int total;
// total = bubbleshot(a, 8);
//     cout << "The largest is: " << total;
// return 0;
// }





//MAIN BUBBLE SHORT

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Bubble Sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // Print sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
