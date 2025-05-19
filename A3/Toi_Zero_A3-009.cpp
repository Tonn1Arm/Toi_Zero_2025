#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[305];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k,ans=INT_MAX;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        arr[x]++;
    }
    for(int i=1;i<=k;i++){
        ans=min(ans,arr[i]);
    }
    cout << n-k*ans;
    return 0;
}
