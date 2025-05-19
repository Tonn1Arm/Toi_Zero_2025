#include <bits/stdc++.h>
using namespace std;
#define st first
#define nd second

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,w,l;
    cin >> n >> w >> l;
    vector <pair<int,int>> p[n];
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        for(int j=0;j<k;j++){
            int x;
            cin >> x;
            if(!p[i].empty() && p[i].back().nd>=x-l){
                p[i].back().nd=x+l;
            }
            else{
                p[i].emplace_back(x-l,x+l);
            }
        }
    }
    map <int,int> mp;
    for(int i=0;i<n;i++){
        for(auto [x,y]:p[i]){
            mp[x]++,mp[y+1]--;
        }
    }
    int cur=0;
    for(auto [k,v]:mp){
        cur+=v;
        if(cur==n){
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
