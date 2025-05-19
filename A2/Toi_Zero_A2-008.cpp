#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,cnt=0,prev=0;
    cin >> n;
    vector <ll> v;
    for(int i=0;i<n;i++){
        ll p,val;
        cin >> p >> val;
        v.emplace_back(val);
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]<prev)cnt++;
        else prev=v[i];
    }
    cout << cnt;
    return 0;
}
