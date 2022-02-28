#include<bits/stdc++.h>
#include<unordered_map>
#define int long long int
#define endl "\n"
using namespace std;

void displayMap(unordered_map<string, int> &mp) {
    cout<<"Displaying hash table"<<endl;
    for(pair<string, int> x: mp) {
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
}

void solve() {
    unordered_map<string, int> mp; // There will be no order to the inserted items
    mp["first"] = 12;
    mp["second"] = 13;
    mp["third"] = 25;
    displayMap(mp);
    cout<<"Erasing first element"<<endl<<endl;
    mp.erase("first");
    displayMap(mp);
    cout<<"Is item present "<<mp.count("third")<<endl; // If not present, returns 0
    cout<<"Searching "<<mp["third"]<<endl;
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