#include <bits/stdc++.h>
using namespace std;
#define st first
#define nd second

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    unordered_map <char,int> mp;
    unordered_map <int,char> pm;
    mp['-']=0,mp['+']=1,mp['x']=2,mp['*']=3;
    pm[0]='-',pm[1]='+',pm[2]='x',pm[3]='*';
    string str[2][n];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin >> str[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << pm[mp[str[0][i][j]]+mp[str[1][i][j]]];
        }
        cout << '\n';
    }
    return 0;
}
