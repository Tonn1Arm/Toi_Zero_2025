#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll r=sqrtl(n-1);
    cout << (r+1)*(r+1)-(r*r)-1-(((r+1)&1)!=(n&1));
    return 0;
}
