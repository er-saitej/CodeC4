#include<bits/stdc++.h>
#include<queue>
#define int long long int
#define endl "\n"
using namespace std;

void displayQueue(queue<int> queue) {
    cout<<"Displaying Queue"<<endl;
    while(!queue.empty()) {
        cout<<queue.front()<<" ";
        queue.pop();
    }
    cout<<endl;
}

void solve() {
    queue<int> queue;
    queue.push(12);
    queue.push(13);
    displayQueue(queue);
    cout<<"Front of queue "<<queue.front()<<endl;
    queue.pop();
    displayQueue(queue);
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