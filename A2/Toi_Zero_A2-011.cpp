#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_map <int,int> cnt;
    for(int i=0;i<10;i++){
        int x;
        cin >> x;
        if(!cnt.count(x)){
            cout << x << " ";cnt[x]=1;
        }
    }
    return 0;
}
