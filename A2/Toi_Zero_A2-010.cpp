#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <ll> mp[50005];
    ll n,q,dist=0,dept=0,lim=0;
    cin >> n >> q;
    for(int i=0;i<n;i++){
        ll d,l;
        cin >> d >> l;
        if(d==1){
            dept+=d;
            mp[dept].emplace_back(dist);
        }
        else{
            mp[dept].emplace_back(dist);
            dept+=d;
        }
        dist+=l;
        lim=max(lim,dept);
    }
    mp[1].emplace_back(dist);
    //for(int i=1;i<=lim;i++){
       // for(auto &x:mp[i]){
         //   cout << x << " ";
       // }cout << "\n";
    //}
    vector <ll> length(lim+1,0);
    length[0]=1e9;
    for(int i=1;i<=lim;i++){
        for(int j=1;j<mp[i].size();j+=2){
            length[i]=max(length[i],mp[i][j]-mp[i][j-1]);
        }
    }
    sort(length.begin(),length.end());
    //for(auto &x:length){
     //   cout << x << " ";
    //}
    while(q--){
        int x;
        cin >> x;
        auto it=lower_bound(length.begin(),length.end(),x);
        cout << length.end()-it-1 << "\n";
    }
    return 0;
}
