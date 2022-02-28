#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
#define int long long int
#define endl "\n"
using namespace std;

void displayPhoneBook(unordered_map< string, vector<int> > &phoneBook) {
    for(pair<string, vector<int> > x: phoneBook) {
        cout<<x.first<<" ";
        for(auto n: x.second) {
            cout<<n<<" ";
        }
        cout<<endl;
    }
}

void solve() {
    cout<<"Implementing phone book"<<endl;
    unordered_map< string, vector<int> > phoneBook;
    int test, number, phone;
    string name;
    cin>>test;
    while(test--) {
        phoneBook[name].reserve(1000);
        cin>>name;
        cin>>number;
        while(number--) {
            cin>>phone;
            phoneBook[name].push_back(phone);
        }
    }
    displayPhoneBook(phoneBook);
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
    return 0;
}