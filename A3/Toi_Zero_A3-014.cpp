#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,l=0,h=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        (x>18) ? h++ : l++;
    }
    cout << n+h-min(h,l+1);
    return 0;
}
