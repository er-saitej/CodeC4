#include<bits/stdc++.h>
#include<stack>
#define int long long int
#define endl "\n"
using namespace std;

void displayStack(stack<int> stack) {
    cout<<"Displaying Stack"<<endl;
    while(!stack.empty()) {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    cout<<endl;
}

void solve() {
    stack<int> stack;
    stack.push(12);
    stack.push(13);
    displayStack(stack);
    cout<<"Top of stack "<<stack.top()<<endl;
    stack.pop();
    displayStack(stack);
    cout<<"Top of stack "<<stack.top()<<endl;
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