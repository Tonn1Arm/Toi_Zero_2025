#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    n=n-n%10;
    for(int i=0;i<=n/10;i++){
        cout << n-i*10 << " ";
    }
    return 0;
}
