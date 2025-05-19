#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll l,n;
    cin >> l >> n;
    ll lf=0,rg=l;
    while(lf<rg){
        ll mid=lf+(rg-lf+1)/2;
        ll tmp=(mid*(mid+1)*(2*mid+1))/6;
        if(tmp>n){
            rg=mid-1;
        }
        else{
            lf=mid;
        }
    }
    cout << l-lf;
    return 0;
}
