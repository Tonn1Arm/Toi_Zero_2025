#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int w,l,m,n,mn=INT_MAX;
    cin >> w >> l >> m >> n;
    //w=max(w,l),l=min(w,l);
    for(int i=m;i<=n;i++){
        mn=min(mn,(w%i)*(l%i));
    }
    cout << mn;
    return 0;
}
