#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Data{
    ll A,L,B,R;
};
ll cnt=0;
ll solve(vector <Data> &vec,ll pos){
    auto [a,l,b,r]=vec[pos-1];
    ll lf=l,rg=r;
    if(!a) lf=solve(vec,l);
    if(!b) rg=solve(vec,r);
    cnt+=abs(lf-rg);
    return abs(lf-rg)+lf+rg;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    vector <Data> v;
    for(int i=0;i<n;i++){
        ll a,l,b,r;
        cin >> a >> l >> b >> r;
        v.push_back({a,l,b,r});
    }
    solve(v,1);
    cout << cnt;
    return 0;
}
