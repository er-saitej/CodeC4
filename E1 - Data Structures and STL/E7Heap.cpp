#include<bits/stdc++.h>
#include<array>
#include<queue>
#define int long long int
#define endl "\n"
using namespace std;

void displayMaxHeap(priority_queue<int> heap) {
    cout<<"Displaying heap"<<endl;
    while(!heap.empty()) {
        cout<<heap.top()<<" ";
        heap.pop();
    }
    cout<<endl;
}

void displayMinHeap(priority_queue<int, vector<int>, greater<int> > heap) {
    cout<<"Displaying heap"<<endl;
    while(!heap.empty()) {
        cout<<heap.top()<<" ";
        heap.pop();
    }
    cout<<endl;
}

void solve() {
    array<int, 4> arr = {10, 30, 5, 25};
    priority_queue<int> maxHeap;
    for(auto x: arr) {
        maxHeap.push(x);
    }
    displayMaxHeap(maxHeap);
    priority_queue<int, vector<int>, greater<int> > minHeap;
    for(auto x: arr) {
        minHeap.push(x);
    }
    displayMinHeap(minHeap);
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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