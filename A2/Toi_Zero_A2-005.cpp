#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll w,h,m,n;
    cin >> w >> h >> m >> n;
    ll prv,mnc,mc,mnr,mr;
    prv=mnc=mc=mnr=mr=0;
    for(int i=0;i<m;i++){
        ll x;
        cin >> x;
        if(mc<=x-prv){
            mnc=mc;
            mc=x-prv;
        }
        else if(mnc<=x-prv){
            mnc=x-prv;
        }
        prv=x;
    }
    if(mc<=w-prv){mnc=mc;mc=w-prv;}
    else if(mnc<w-prv){mnc=w-prv;}
    prv=0;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        if(mr<=x-prv){
            mnr=mr;
            mr=x-prv;
        }
        else if(mnr<x-prv){
            mnr=x-prv;
        }
        prv=x;
    }
    if(mr<=h-prv){mnr=mr;mr=h-prv;}
    else if(mnr<h-prv){mnr=h-prv;}
    cout << mc*mr << " " << max(mc*mnr,mr*mnc);
    return 0;
}
