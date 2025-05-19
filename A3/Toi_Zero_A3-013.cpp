#include <bits/stdc++.h>
using namespace std;
#define ll long long
int idf(ll h){
    bool t=h%3,f=h%4;
    return t-f;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,d,mn=0,mx=0;
    cin >> n >> d;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(!idf(x)) mn+=x/3*10,mx+=x/4*10;
        else if(idf(x)==-1) mn+=x/3*10,mx+=x/3*10;
        else mn+=x/4*10,mx+=x/4*10;
    }
    cout << d-mn << " " << d-mx;
    return 0;
}
