#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    if(a<b){
        cout << ((b<c) ? "increasing" : "neither");
    }
    else{
        cout << ((b>c) ? "decreasing" : "neither");
    }
    return 0;
}
