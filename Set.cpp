#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    cout << s.size() << endl;
    s.insert(1);
    cout << s.size() << endl;
    s.erase(2);
    s.erase(4);
    cout<<s.size() << endl;
    cout << s.count(1) << endl;
    cout << s.count(4) << endl;
    auto it = s.begin();
    cout << *it << endl;
    it++;
    cout << *it << endl;
}