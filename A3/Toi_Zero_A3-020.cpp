#include <bits/stdc++.h>

using namespace std;

int main() {
    int h1,h2,b1,b2,x,y;
    cin >> h1 >> h2 >> b1 >> b2 >> x >> y;
    int n=0;
    for (int i=0;i<=min(h1,b1);i++){
        for (int j=0;j<=min(h2,b2);j++){
            n=max(n,(min(i+j,x)+min((min(h1-i,b2-j)+min(h2-j,b1-i)),y)));
        }
    }
    cout << n;
}
