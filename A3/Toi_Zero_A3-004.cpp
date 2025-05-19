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
    ll n;
    cin >> n;
    vector <ll> u(n),v(n);
    for(int i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        u[i]=x+y,v[i]=x-y;
    }
    sort(u.begin(),u.end());
    sort(v.begin(),v.end());
    ll xx=u[n/2],yy=v[n/2],cnt=0;
    for(int i=0;i<n;i++){
        ll x=u[i],y=v[i];
        cnt+=abs(x-xx)+abs(y-yy);
    }
    cout << cnt;
    return 0;
}
