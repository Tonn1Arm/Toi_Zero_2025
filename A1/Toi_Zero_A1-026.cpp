#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,odd=0,even=0;
    for(int i=0;i<3;i++){
        cin >> x;
        (x&1) ? odd++ : even++;
    }
    cout << "even " << even << "\nodd " << odd;
    return 0;
}
