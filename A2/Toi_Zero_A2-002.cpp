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
    ll n,ans=0;
    set <pair<ll,ll>> s;
    unordered_map <ll,set<ll>> memlf;
    unordered_map <ll,set<ll>> memrg;
    cin >> n;
    for(int i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        memlf[x-y].emplace(x);
        memrg[x+y].emplace(x);
    }
    for(auto& [key,vec]:memlf){
        if(vec.size()>1){
            ans=max(ans,abs(*(prev(vec.end()))-*(vec.begin())));
        }
    }
    for(auto& [key,vec]:memrg){
        if(vec.size()>1){
            ans=max(ans,abs(*(prev(vec.end()))-*(vec.begin())));
        }
    }
    cout << ans;
    return 0;
}
