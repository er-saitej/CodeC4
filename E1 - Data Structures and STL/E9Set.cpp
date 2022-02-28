#include<bits/stdc++.h>
#include<unordered_set>
#include<set>
#define int long long int
#define endl "\n"
using namespace std;

void displayUSet(unordered_set<int> &us) {
    cout<<"Displaying unordered set"<<endl;
    for(auto x: us) {
        cout<<x<<" ";
    }
    cout<<endl;
}

void displayOSet(set<int> &set) {
    cout<<"Displaying ordered set"<<endl;
    for(auto x: set) {
        cout<<x<<" ";
    }
    cout<<endl;
}

void solve() {
    unordered_set<int> us;
    int test, number;
    cin>>test;
    while(test--) {
        cin>>number;
        us.insert(number);
    }
    displayUSet(us);
    cout<<"Erasing a value"<<endl;
    us.erase(6);
    displayUSet(us);
    cout<<"Is present "<<us.count(23)<<endl;
    cout<<"Is present "<<us.count(4)<<endl;
    set<int> s; // orders elements in set in ascending pattern.
    s.insert(23);
    s.insert(29);
    s.insert(21);
    s.insert(23);
    displayOSet(s);
    cout<<"Erasing an element in the set"<<endl;
    s.erase(29);
    displayOSet(s);
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