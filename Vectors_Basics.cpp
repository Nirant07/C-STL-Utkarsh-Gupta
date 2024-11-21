#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<v.size();

    cout << v[0] << v[1] << v[2];

    v.pop_back();
    cout<<v.size();
    v.push_back(0);
    cout << endl << v[0] << v[1] << v[2];

    v.clear();
    v.size();
}