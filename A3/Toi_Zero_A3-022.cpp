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
    vector <ll> v(360,0);
    for(int i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        if(y>=x){
            for(int i=x+1;i<=y;i++){
                v[i]++;
            }
        }
        else{
            for(int i=x+1;i<=359;i++){
                v[i]++;
            }
            for(int i=0;i<=y;i++){
                v[i]++;
            }
        }
    }
    ll cur=0,mx=0;
    for(int k=0;k<2;k++){
        for(int i=0;i<360;i++){
            cur+=bool(v[i]);
            cur*=bool(v[i]);
            mx=max(mx,cur);
        }
    }

    cout << min(mx,360ll);
    return 0;
}
