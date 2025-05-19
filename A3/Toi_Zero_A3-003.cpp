#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[2][305];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,cnt=0;
    cin >> n;
    arr[0][0]=arr[1][0]=1;
    for(int i=0;i<2;i++){
        for(int j=1;j<=n;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        ll Al=max(arr[0][i],arr[0][i-1]),Ar=min(arr[0][i],arr[0][i-1]),Bl=max(arr[1][i],arr[1][i-1]),Br=min(arr[1][i],arr[1][i-1]);
        cnt+=((Al>Br & Ar<Br & Al<Bl) | (Al>Bl & Ar<Bl & Ar>Br) | (Al==Bl & Ar==Br));
    }
    cout << cnt;
    return 0;
}
