#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define st first
#define nd second
const int N=1e5+5;
ll arr[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k,cnt=0,stk=1;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    unordered_map <ll,ll> icd;
    deque <ll> dq;
    for(int i=1;i<=n;i++){
        dq.push_back(arr[i]);
        icd[arr[i]]++;
        if(icd.size()<k) continue;
        while(icd.size()>k){
            icd[dq.front()]--;
            if(!icd[dq.front()]){
                icd.erase(dq.front());
            }
            dq.pop_front();
            stk++;
        }
        while(1){
            if(icd[dq.front()]>1) icd[dq.front()]--;
            else break;
            dq.pop_front();
            stk++;
        }
        cnt+=stk;
    }
    cout << cnt;
    return 0;
}
