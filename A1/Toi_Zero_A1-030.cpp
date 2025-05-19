#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x,y,sum=0;
    vector <int> v;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        v.emplace_back((x<y) ? y:x);
    }
    for(int i=0;i<n;i++){
        if(i==n-1 && n!=1)cout << v[i] << " = ";
        else if(n!=1)cout << v[i] << " + ";
        sum+=v[i];
    }
    cout << sum;
    return 0;
}
