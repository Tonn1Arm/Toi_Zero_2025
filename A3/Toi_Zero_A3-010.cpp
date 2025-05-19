#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll lcm(ll a,ll b){
    return a*b/__gcd(a,b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k,t,i,sum=1;
    bool stl=1;
    cin >> n >> k >> t;
    for(i=1;i<=lcm(n,k)/k;i++){
        if((sum-1)%n+1==t){
            stl=0;break;
        }
        sum+=k;
    }
    cout << i-(stl);
    return 0;
}
