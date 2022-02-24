/*
    Vector: Special arrays which can dynamically change size. - Continuous memory allocation.
    Doubles its capacity when new element gets inserted after array is full. - Expensive operation [takes O(n) time]
*/
#include<bits/stdc++.h>
#include<vector>
#define int long long int
#define endl "\n"
using namespace std;

void displayVector(const vector<int> &vector) {
    cout<<"Displaying vector"<<endl;
    for(auto x: vector) {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Size of a vector "<<vector.size()<<endl;
    cout<<"Size of a capacity "<<vector.capacity()<<endl;
}

void solveVector1() {
    vector<int> vector;
    vector.push_back(10); // To insert element into a vector
    displayVector(vector);
    vector.push_back(20);
    displayVector(vector);
    vector.push_back(30);
    displayVector(vector);
    vector.pop_back(); // To pop last element of a vector
    displayVector(vector);
    vector.clear(); // To remove elements of a vector [size becomes 0 and capacity doesn't change]
    displayVector(vector);
}

void solveVector2() {
    vector<int> vector(3, 3212); // To fill first 3 boxes with 3212
    vector.reserve(10);
    vector.push_back(100);
    vector.push_back(200);
    displayVector(vector);
    cout<<"4th element of vector "<<vector.at(3)<<endl;
    cout<<"Max RAM available for vector "<<vector.max_size()<<endl;
    
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
    while(test--) {
        cout<<"Vector 1 implemented"<<endl;
        solveVector1();
        cout<<endl<<endl<<endl<<"Vector 2 implemented"<<endl;
        solveVector2();
    }
    cerr<<((double)clock() - initialTime)/CLOCKS_PER_SEC;
}