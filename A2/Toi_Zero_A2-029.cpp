#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=n-i;j++){
            cout << (j!=1 && j!=n-i && i) << " ";
        }
        cout << '\n';
    }
    return 0;
}
