#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,l,mx=0;
    cin >> n >> l;
    vector <int> data(n+1),tmp(n+1);
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        data[i]=x;
        tmp[i]=max(mx+1,x);
        mx=max(mx,x);
    }
    while(l--){
        int x;
        cin >> x;
        cout << tmp[x]-data[x] << "\n";
    }
    return 0;
}
