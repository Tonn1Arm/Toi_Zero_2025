#include <bits/stdc++.h>
using namespace std;
const  int N=1e4+5;
int mat[N][N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,k;
    int xx[8]={-1,0,1,1,1,0,-1,-1},yy[8]={1,1,1,0,-1,-1,-1,0};
    cin >> n >> m >> k;
    while(k--){
        int x,y;
        cin >> x >> y;
        mat[x][y]=9;
        for(int i=0;i<8;i++){
            int nx=x+xx[i],ny=y+yy[i];
            if(nx<0 || nx>=n) continue;
            if(ny<0 || ny>=m) continue;
            mat[nx][ny]++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]>8) cout << "x ";
            else cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
