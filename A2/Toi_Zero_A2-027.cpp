#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,mx=INT_MIN,cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(mx<x) mx=x,cnt=0;
        if(mx==x) cnt++;
    }
    cout << mx << "\n" << cnt;
    return 0;
}
