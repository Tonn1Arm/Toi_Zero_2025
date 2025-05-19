#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    priority_queue <ll> cost,order;
    for(int i=0;i<n;i++){
        ll x;
        cin >> x;
        order.push(x);
    }
    ll cnt=0;
    for(int i=1;i<=200;i++){
        for(int j=1;j<=9;j++){
            cost.push(-i*2);
        }
        cost.push(-i);
    }
    while(!order.empty()){
        cnt-=cost.top()*order.top();
        cost.pop(),order.pop();
    }
    cout << cnt;
    return 0;
}
