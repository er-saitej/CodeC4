#include<bits/stdc++.h>
#include<array>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

void displayArray(const array<int, 6> &arr) {
    cout<<"Displaying array"<<endl;
    for(auto x: arr) {
        cout<<x<<endl;
    }
}

void updateArray(array<int, 6> &arr, int value, int index) { // Should pass array by reference.
    cout<<"Updating array"<<endl;
    arr.at(index) = value;
    displayArray(arr);
}

void calculateSizeOfArray(const array<int, 6> &arr) {
    cout<<"Size of array"<<endl;
    cout<<sizeof(arr)/sizeof(int)<<endl;
}

void sort(array<int, 6> &arr) {
    cout<<"Sorting array"<<endl;
    sort(arr.begin(), arr.end());
    displayArray(arr);
}

void solve() {
    array<int, 6> sampleArr;
    sampleArr.fill(5);
    displayArray(sampleArr);
    array<int, 6> arr = {1, 2, 3, 4, 5, 6};
    arr.at(0) = 10;
    displayArray(arr);
    updateArray(arr, 91, 3);
    displayArray(arr);
    calculateSizeOfArray(arr);
    sort(arr);
    cout<<"Element at front of the array "<<arr.front()<<endl;
    cout<<"Element at back of the array "<<arr.back()<<endl;
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
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}
