#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,cnt=0,sum=0;
    cin >> n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.emplace_back(x);
    }
    sort(v.begin(),v.end());
    for(auto &x:v){
        cnt+=x;
        sum+=cnt*2;
    }
    cout << sum;
    return 0;
}
