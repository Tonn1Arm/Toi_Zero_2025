#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define st first
#define nd second
#define pb(x) emplace_back(x)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,mx=0,cur=0;
    cin >> n >> m;
    map <ll,ll> v;
    for(int i=0;i<m;i++){
        ll x,y;
        cin >> x >> y;
        v[x]++,v[y+1]--;
    }
    for(auto [x,val]:v){
        cur+=val;
        mx=max(mx,cur);
    }
    cout << mx;
    return 0;
}
