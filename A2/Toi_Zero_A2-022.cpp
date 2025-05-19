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
    ll n,m;
    cin >> m >> n;
    map <ll,ll> v;
    for(int i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        v[x]++;
        v[y]--;
    }
    ll ans=0,cur=0;
    for(auto [k,val]:v){
        cur+=val;
        ans=max(ans,cur);
    }
    cout << ans;
    return 0;
}
