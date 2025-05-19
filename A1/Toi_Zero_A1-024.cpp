#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int y,cc;
    cin >> y >> cc;
    if(cc<=1500){
        if(y<=1990)cout << 1250;
        else if(y>=2000)cout << 1000;
        else cout << 1100;
    }
    else if(cc>2000){
        if(y<=1990)cout << 2000;
        else if(y>=2000)cout << 1500;
        else cout << 1700;
    }
    else{
        if(y<=1990)cout << 1400;
        else if(y>=2000)cout << 1200;
        else cout << 1300;
    }
    return 0;
}
