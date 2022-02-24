#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void updateArray(int arr[], int n, int value) {
    arr[n] = value;
}

void displayArray(int arr[], int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<endl;
    }
}

void calculateSizeOfArray(int arr[]) {
    cout<<(sizeof(arr)/sizeof(int))<<endl; // This cannot calculate actual size of an array.
}

void solve() {
    int arr[] = {1, 2, 3, 4, 5}; // Fixed size
    int size = sizeof(arr)/sizeof(int);
    cout<<arr<<endl; // Gives index of an array. So array is always passed by reference.
    displayArray(arr, size);
    updateArray(arr, 1, 10);
    cout<<"Array is updated"<<endl;
    displayArray(arr, size);
    cout<<"Size of an array"<<endl;
    cout<<(sizeof(arr)/sizeof(int))<<endl; // Actual size of an array.
    calculateSizeOfArray(arr);
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test;
    cin>>test;
    while(test--) solve();
    cerr<<((double)clock() - initialTime)/CLOCKS_PER_SEC;
    return 0;
}