#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x;
    char c;
    cin >> x >> c;
    if(c=='F'){
        x=(x-32)*5/9;
    }
    if(x<=0)cout << "solid";
    else if(x>=100)cout << "gas";
    else cout << "liquid";
    return 0;
}
