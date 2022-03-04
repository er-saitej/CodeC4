#include<bits/stdc++.h>
#include<stack>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int n) {
    stack<int> stack;
    int result = 0;
    while(n>0) {
        stack.push(n&1);
        n = n>>1;
    }
    while(!stack.empty()) {
        result = result*10 + stack.top();
        stack.pop();
    }
    cout<<result;
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
    int num;
    cin>>test;
    while(test--) {
        cin>>num;
        solve(num);
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}