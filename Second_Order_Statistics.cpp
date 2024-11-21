#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    auto it = s.begin();
    it++;
    cout << *it;
}