#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,y,z,cnt=0;
    cin >> x >> y >> z;
    if(x==y) cnt++;
    if(x==z) cnt++;
    if(y==z) cnt++;
    switch(cnt){
        case 0:cout << "all different";
        break;
        case 1:cout << "neither";
        break;
        case 3:cout << "all the same";
        break;
    }
    return 0;
}
