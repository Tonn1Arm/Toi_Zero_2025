#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[105];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    unordered_set <ll> s;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        ll sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            s.emplace(sum);
        }
    }
    cout << s.size();
    return 0;
}
