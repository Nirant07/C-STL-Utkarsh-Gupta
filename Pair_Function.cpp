#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> p[3];
    p[0]={1,"Nirant"};
    cout<<p[0].first;
    cout << p[0].second;
    p[0].first=2;
    cout<<p[0].first;
    cout << p[0].second;
}