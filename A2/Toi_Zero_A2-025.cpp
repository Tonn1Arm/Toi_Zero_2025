#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll haz[10005][10005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,h,j,k;
    cin >> n >> m >> h >> j >> k;
    vector <vector<pair<ll,ll>>> v(101);
    int xx[8]={-1,0,1,1,1,0,-1,-1},yy[8]={1,1,1,0,-1,-1,-1,0};
    for(int i=0;i<k;i++){
        ll x,y;
        cin >> x >> y;
        v[100].emplace_back(x,y);
    }
    for(int f=0;f<3;f++){
        ll val=100-40*f;
        while(!v[val].empty()){
            auto [x,y]=v[val].back();
            v[val].pop_back();
            if(haz[x][y]>=val) continue;
            haz[x][y]=val;
            for(int i=0;i<8;i++){
                ll nx=x+xx[i],ny=y+yy[i];
                if(nx<0 || nx>=n) continue;
                if(ny<0 || ny>=m) continue;
                if(haz[nx][ny]<val-40){
                    v[val-40].emplace_back(nx,ny);
                }
            }
        }
    }
    ll cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!haz[i][j]) cnt++;
        }
    }
    cout << cnt << "\n" << haz[h][j] << "%";
    return 0;
}
