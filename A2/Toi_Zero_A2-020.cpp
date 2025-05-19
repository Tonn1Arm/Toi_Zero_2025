#include <bits/stdc++.h>
using namespace std;
int mp[100005];
bool vist[100005];
int lcm(int a,int b){
    return a*b/__gcd(a,b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,mx=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> mp[i];
    }
    for(int i=1;i<=n;i++){
        if(!vist[i]){
            int cnt=0,cur=i;
            while(!vist[cur]){
                vist[cur]=1;
                cnt++;
                cur=mp[cur];
            }
            mx=max(cnt,mx);
        }
    }
    cout << mx;
    return 0;
}
