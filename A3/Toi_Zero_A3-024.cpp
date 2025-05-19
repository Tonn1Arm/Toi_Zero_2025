#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define st first
#define nd second

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,l,ans=0;
    cin >> n >> l;
    vector <pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        v.emplace_back(x,y);
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++){
        ll cur=0,to=v[i].st,lim=v[i].nd;
        for(int j=i+1;j<n && (v[j].st<=v[i].nd);j++){
            if(v[j].nd<to || v[j].st>lim) break;
            to=v[j].st,lim=min(lim,v[j].nd),cur++;
        }
        i+=cur;
        ans++;
    }
    cout << ans;
    return 0;
}
