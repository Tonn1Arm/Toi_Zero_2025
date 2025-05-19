#include <bits/stdc++.h>
using namespace std;
#define pb(x) emplace_back(x);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unordered_map <char,int> mp;
    unordered_map <char,vector<int>> tea;
    tea['R'].pb(12);tea['R'].pb(18);tea['R'].pb(25);
    tea['T'].pb(15);tea['T'].pb(20);tea['T'].pb(30);
    tea['M'].pb(10);tea['M'].pb(15);tea['M'].pb(20);
    mp['H']=5,mp['O']=3,mp['J']=2;
    char b,t;
    int g,s,v;
    cin >> b >> g >> t >> s >> v;
    cout << mp[b]*g+tea[t][s-1]*v;
    return 0;
}
