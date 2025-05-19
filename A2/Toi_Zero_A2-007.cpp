#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define st first
#define nd second
vector<ll> greedy_sort(vector <pair<ll,ll>> &v){
    vector <pair<ll,ll>> gd;
    gd.resize(v.size());
    for(int i=0;i<v.size();i++){
        gd[i].st=v[i].nd-v[i].st;
        gd[i].nd=i+1;
    }
    sort(gd.begin(),gd.end());
    vector <ll> sv(v.size());
    for(int i=0;i<v.size();i++){
        sv[i]=gd[i].nd;
    }
    return sv;
}
ll dfs(ll idx,vector<ll> v[],vector<ll> &val){
    for(auto x:v[idx]){//cout << "K" << x;
        if(val[idx]==val[x]){
            return dfs(x,v,val);
        }
    }
    return idx;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m;
    cin >> n >> m;
    unordered_set <ll> tar;
    vector <pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].st >> v[i].nd;
    }
    for(int i=0;i<m;i++){
        ll x;
        cin >> x;
        tar.emplace(x);
    }
    vector <ll> order=greedy_sort(v),ans,val(n+1,0);
    vector <ll> incld[n+1],rev[n+1];
    for(int i=0;i<n;i++){
        ll x=order[i];
        ll xlf=v[x-1].st,xrg=v[x-1].nd;
        for(auto &t:tar){
            ll tlf=v[t-1].st,trg=v[t-1].nd;
            if(xlf<=tlf && xrg>=trg){
                val[x]++;
            }
        }
        for(int j=0;j<i;j++){
            ll y=order[j];
            ll ylf=v[y-1].st,yrg=v[y-1].nd;
            if(xlf<=ylf && xrg>=yrg){
                incld[x].emplace_back(y);
                rev[y].emplace_back(x);
            }
        }
    }
    vector <ll> top;
    for(int i=1;i<=n;i++){
        if(rev[i].empty() && val[i]>0){
            top.emplace_back(i);
        }
    }
    //for(auto x:rev[6]){cout << x << " ";}
    for(auto t:top){
        //cout << t << "->";
        ans.emplace_back(dfs(t,incld,val));
    }
    sort(ans.begin(),ans.end());
    cout << ans.size() << "\n";
    //for(int i=1;i<=n;i++){cout << i << "_" << val[i]<< " ";}
    //for(auto t:top)cout << t << " ";
    for(auto &x:ans){
       cout << x << " ";
    }
    return 0;
}
