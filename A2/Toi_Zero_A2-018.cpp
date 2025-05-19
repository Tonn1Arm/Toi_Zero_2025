#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str[3]={"Red","Green","Blue"};
    unordered_map <char,int> mp;
    mp['R']=0,mp['G']=1,mp['B']=2;
    char c;
    int x;
    cin >> c >> x;
    int mod=mp[c];
    for(int i=0;i<x;i++){
        cout << str[(i+mod)%3] << " ";
    }
    return 0;
}
