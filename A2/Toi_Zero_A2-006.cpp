#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Data{
    ll x,y;
};
char mp[35][35];
bool vist[35][35];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> mp[i][j];
        }
    }
    ll xx[2]={0,-1},yy[2]={-1,0};
    queue <Data> q;
    q.push({n,n});
    ll cnt=0;
    while(!q.empty()){
        ll x=q.front().x;
        ll y=q.front().y;
        q.pop();
        if(vist[x][y])continue;
        vist[x][y]=1;cnt++;
        for(int i=0;i<2;i++){
            ll dx=x+xx[i];
            ll dy=y+yy[i];
            if(dx<=0 || dx>n) continue;
            if(dy<=0 || dy>n) continue;
            if(mp[dx][dy]=='X') continue;
            q.push({dx,dy});
        }
    }
    cout << cnt;
    return 0;
}
