#include <bits/stdc++.h>
using namespace std;
int mp[1005][1005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,k;
    cin >> n >> m >> k;
    int xx[8]={-1,0,1,1,1,0,-1,-1},yy[8]={1,1,1,0,-1,-1,-1,0};
    while(k--){
        int x,y;
        cin >> x >> y;
        mp[x][y]++;
    }
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mp[i][j]) continue;
            int cnt=0;
            for(int k=0;k<8;k++){
                int nx=i+xx[k],ny=j+yy[k];
                if(nx<0 || nx>=n) continue;
                if(ny<0 || ny>=m) continue;
                cnt+=mp[nx][ny];
            }
            mx=max(mx,cnt);
        }
    }
    cout << mx;
    return 0;
}
