#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll finmax(vector <ll> &v1,vector <ll> &v2,ll sz){
    ll res=0;
    for(int i=0;i<sz;i++){
        res=max(res,v1[i]+v2[sz-i-1]);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin >> n >> k;
    vector <ll> s1,s2,t1,t2;
    for(int i=0;i<n;i++){
        ll x;cin >> x;s1.emplace_back(x);
    }
    for(int i=0;i<n;i++){
        ll x;cin >> x;s2.emplace_back(x);
    }
    for(int i=0;i<n;i++){
        ll x;cin >> x;t1.emplace_back(x);
    }
    for(int i=0;i<n;i++){
        ll x;cin >> x;t2.emplace_back(x);
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(t1.begin(),t1.end());
    sort(t2.begin(),t2.end());
    ll lim1=n,lim2=n,it=0,mx=INT_MIN;
    while(lim1>0 && lim2>0 && it<(n*2)-k){
        ll r1=finmax(s1,t1,lim1),r2=finmax(s2,t2,lim2);
        if(r1>r2){
            lim1--;
        }
        else{
            lim2--;
        }
        it++;
    }
    while(it<(n*2)-k){
        if(lim1>0){
            lim1--;
        }
        else{
            lim2--;
        }
        it++;
    }
    for(int i=0;i<lim1;i++){
        mx=max(mx,s1[i]+t1[lim1-i-1]);
    }
    for(int i=0;i<lim2;i++){
        mx=max(mx,s2[i]+t2[lim2-i-1]);
    }
    cout << mx;
    return 0;
}
