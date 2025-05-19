#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll l,p,r,m,f;
    cin >> l >> p >> r >> m >> f;
    map <ll,ll> mp,poi;
    map<ll,string> name;
    name[0]="Rabbit",name[1]="Monkey",name[2]="Frog";
    poi[0]=r,poi[1]=m,poi[2]=f;
    for(int i=0;i<p;i++){
        ll x,val;
        cin >> x >> val;
        for(int j=0;j<3;j++){
            if(x%poi[j]==0){
                mp[j]+=val;
            }
        }
    }
    ll prev=0,sv;
    for(auto it=mp.rbegin();it!=mp.rend();++it){
        if(it->second>=prev){
            sv=it->first;
            prev=it->second;
        }
    }
    cout << name[sv] << " " << mp[sv] << "\n";
    for(auto it=mp.begin();it!=mp.end();++it){
        if(it->second==prev && it->first!=sv){
            cout << name[it->first] << " " << mp[it->first] << "\n";
        }
    }
    return 0;
}
