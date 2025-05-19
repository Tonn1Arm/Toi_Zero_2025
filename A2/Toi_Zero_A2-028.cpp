#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    ll cnt=0,n;
    cin >> n >> a >> b;
    for(int i=0;a[i];i++){
        ll x=(a[i]-'0')+(b[i]-'0');
        if(x!=9) cnt++;
    }
    if(cnt==0) cout << "YES";
    else cout << "NO " << cnt;
    return 0;
}
