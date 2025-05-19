#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define st first
#define nd second
ll mp[35][35];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,c;
    bool pass=0;
    cin >> n >> c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> mp[i][j];
        }
    }
    vector <ll> v;
    for(int i=1;i<=n;i++){
        v.emplace_back(i);
    }
    for(int i=n;i>1;i/=2){
        vector <ll> q;
        for(int j=0;j<v.size();j+=2){
            ll x=v[j],y=v[j+1];
            if((x==c || y==c) && !pass && mp[x][y]!=c){
                q.emplace_back(c);
                pass=1;continue;
            }
            q.emplace_back(mp[x][y]);
        }
        v=q;
    }
    for(auto &x:v)cout << x;
    return 0;
}
