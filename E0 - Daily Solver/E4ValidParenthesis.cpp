#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

bool isValid(string s) {
    stack<char> sck;
    for(auto x: s) {
        if(x=='(' || x=='{' || x=='[') {
            sck.push(x);
        }
        else if(x==')') {
            if(sck.empty()) return false;
            if(sck.top()=='(') sck.pop();
            else return false;
        }
        else if(x=='}') {
            if(sck.empty()) return false;
            if(sck.top()=='{') sck.pop();
            else return false;
        }
        else if(x==']') {
            if(sck.empty()) return false;
            if(sck.top()=='[') sck.pop();
            else return false;
        }
        else {
            return false;
        }
    }
    if(sck.empty()) return true;
    return false;
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
    string s;
    cin>>test;
    while(test--) {
        cin>>s;
        cout<<isValid(s);
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}