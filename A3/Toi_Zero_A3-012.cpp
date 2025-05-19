#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,s,cnt=0;
    cin >> n >> s;
    vector <int> dir(n+1,0);
    vector <bool> vist(n+1,0);
    vist[0]=true;
    for(int i=1;i<=n;i++){
        cin >> dir[i];
    }
    while(!vist[s]){
            vist[s]=1;
            cnt++;
            s=dir[s];
    }
    cout << cnt;
    return 0;
}
