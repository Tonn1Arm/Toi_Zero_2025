#include <bits/stdc++.h>
using namespace std;
const int N=1e4+5;
int mat[N][N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;
            cin >> c;
            if(c=='*') mat[i][j]++,mat[min(i+1,n-1)][j]++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << ((mat[i][j]) ? '*' : '-') << " ";
        }
        cout << "\n";
    }
    return 0;
}
