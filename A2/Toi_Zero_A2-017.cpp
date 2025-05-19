#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unordered_map <char,int> mp;
    mp['S']=60,mp['M']=80,mp['L']=100,mp['P']=15,mp['E']=10;
    char s,t,p;
    int cnt=1;
    cin >> s >> t >> p;
    if(p!='N')cin >> cnt;
    cout << mp[s]+mp[p]*cnt+((t=='T') ? 20 : 0);
    return 0;
}
