#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n;
    char dna[2][n];
    unordered_map <char,int> mp;
    mp['A']=-1,mp['T']=1,mp['C']=-2,mp['G']=2;
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin >> dna[i][j];
        }
    }
    cin >> k;
    while(k--){
        int t,p;
        cin >> t >> p >> dna[t-1 ][p];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=bool(mp[dna[0][i]]+mp[dna[1][i]]);
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cout << dna[i][j] << " ";
        }
        cout << "\n";
    }
    cout << cnt;
    return 0;
}
