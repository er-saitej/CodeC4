#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

int strStr(string haystack, string needle) {
    if(haystack==""&&needle=="") return 0;
    string sub;
    int index = 0;
    for(auto x: haystack) {
        if(x==needle.at(0)) {
            sub = haystack.substr(index, needle.size());
            if(sub==needle) return index;
        }
        index++;
    }
    return -1;
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
    string haystack, needle;
    cin>>test;
    while(test--) {
        cin>>haystack>>needle;
        cout<<strStr(haystack, needle)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}