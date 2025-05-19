#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k,cnt=0;
    cin >> n >> k;
    vector <ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    ll mn=*min_element(v.begin(),v.end())*k;
    for(auto &x:v){
        if(mn/x+bool(mn%x)<k) cnt++;
    }
    cout << n-cnt;
    return 0;
}
