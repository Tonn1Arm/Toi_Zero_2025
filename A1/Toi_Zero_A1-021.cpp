#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int y;
    cin >> y;
    if(y%4==0){
        cout << ((y%100==0 && y%400!=0 && y>1582) ? "no":"yes");
    }
    else{
        cout << "no";
    }
    return 0;
}
