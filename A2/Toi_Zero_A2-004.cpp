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
    unordered_map <ll,ll> mp;
    ll mx=INT_MIN;
    while(n--){
        ll x;
        cin >> x;
        mp[x]++;
        mx=max(mx,mp[x]);
    }
    cout << mx;
    return 0;
}
