#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str,sv;
    ll mx=INT_MIN,n,cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
        ll x;
        cin >> str >> x;
        if(x>15) cnt++;
        if(mx<x){
            sv=str,mx=x;
        }
    }
    cout << cnt << "\n" << sv << " " << mx;
    return 0;
}
