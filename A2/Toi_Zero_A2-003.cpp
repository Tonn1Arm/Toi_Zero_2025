#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    vector <ll> v;
    v.emplace_back(0);
    for(int i=1;i<=n;i++){
        ll x;
        cin >> x;
        v.emplace_back(x);
    }
    v.emplace_back(0);
    ll cnt=0;
    for(int i=1;i<=n;i++){
        if(v[i]>v[i-1] && v[i]>v[i+1])cnt++;
    }
    cout << cnt;
    return 0;
}
