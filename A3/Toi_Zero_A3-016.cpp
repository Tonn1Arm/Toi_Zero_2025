#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,cnt=0;
    cin >> n >> m;
    vector <ll> idg(m+1,0);
    vector <ll> adj[n+1];
    vector <ll> rule(m+1,0);
    for(int i=1;i<=m;i++){
        ll k,t;
        cin >> k;
        idg[i]+=k;
        for(int j=0;j<k;j++){
            ll x;
            cin >> x;
            adj[x].emplace_back(i);
        }
        cin >> t;
        rule[i]=t;
    }
    queue <ll> q;
    unordered_set <ll> act;
    q.push(1);
    while(!q.empty()){
        ll u=q.front();q.pop();
        if(act.count(u)) continue;
        cnt++;
        act.emplace(u);
        for(auto &v:adj[u]){
            idg[v]--;
            if(!idg[v]) q.push(rule[v]);
        }
    }
    cout << cnt;
    return 0;
}
