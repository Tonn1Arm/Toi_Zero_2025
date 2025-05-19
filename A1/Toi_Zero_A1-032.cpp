#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<6;i+=2){
        if(n-i>0){
            for(int j=0;j<n-i;j++)cout << "*";
        }
        else{
            break;
        }
        cout << "\n";
    }
    return 0;
}
