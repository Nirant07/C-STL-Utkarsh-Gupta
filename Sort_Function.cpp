#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[4] = {4,5,1,2};
    sort(a,a+3);
    for(int i = 0;i<4;i++){
        cout << a[i] << endl;
    }
    int b[4] = {4,5,1,2};
    sort(b,b+4);
    for(int i = 0;i<4;i++){
        cout << b[i] << endl;
    }
    vector<int> v(4);
    v={4,5,1,2};
    sort(v.begin(),v.end());
    for(int i = 0;i<4;i++){
        cout << v[i] << endl;
    }
    string s = "nirant";
    cout<<"nirant"<<endl;
    sort(s.begin(),s.end());
    for(int i = 0;i<7;i++){
        cout << s[i];
    }
}