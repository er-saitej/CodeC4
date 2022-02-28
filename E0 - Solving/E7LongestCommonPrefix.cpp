#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

string solve(vector<string> &strs) {
    cout<<(~1)<<endl;
    return "";
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    vector<string> ins;
    ins.push_back("flower");
    ins.push_back("flow");
    ins.push_back("flight");
    cout<<solve(ins);
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}