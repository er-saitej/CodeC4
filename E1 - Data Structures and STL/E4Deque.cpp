// Deque - Doubly ended queue - a window which expands and contracts from both sides. - not continuous locations.
// Functions - push_back, pop_back, push_front, pop_front
#include<bits/stdc++.h>
#include<deque>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

void displayDeque(deque<int> &deque) {
    cout<<"Displaying deque"<<endl;
    for(auto x: deque) {
        cout<<x<<" ";
    }
    cout<<endl;
}

void displaySizeAndCapacity(deque<int> &deque) {
    cout<<"Size of deque "<<deque.size()<<endl;
}

void solve() {
    deque<int> deque(2);
    displayDeque(deque);
    deque.push_back(10);
    deque.push_front(10);
    displayDeque(deque);
    displaySizeAndCapacity(deque);
    deque.pop_back();
    displayDeque(deque);
    displaySizeAndCapacity(deque);
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test;
    cin>>test;
    while(test--) solve();
    return 0;
}