#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <ll> prime;
    vector <bool> isprime(15001,true);
    isprime[0]=isprime[1]=0;
    for(int i=2;i*i<=15000;i++){
        if(isprime[i]){
            for(int j=i*i;j<=15000;j+=i){
                isprime[j]=false;
            }
        }
    }
    ll a,b;
    cin >> a >> b;
    for(int i=a*3;i<=b*3;i++){
        if(isprime[i])prime.emplace_back(i-(3*a)+3);
    }
    //for(auto &x:prime)cout << x << " ";
    ll ans=0,lim=b-a+1;
    for(int i=0;i<prime.size();i++){
        ll sum=0;    //cout << prime[i] << "->";
        ll start=prime[i]-1;
        if(start-1>lim){
            start=(start-1)-2*lim;
            if(start<0) start=0;
        }
        else{
            start=0;
        }
        for(int j=1+start;j<=lim;j++){
            ll c=prime[i]-j,cur;
            if(c/2-j+1>0){
                cur=c/2-j+1;
                if(c-j>lim){cur-=c-j-lim;}
                if(cur<0)break;
                ans+=cur;sum+=cur;
                //cout << "i=" << i << " j=" << j << " " << cur << "_" << "|";
            }
            else{
                break;
            }
        }//cout << prime[i]+6 << "= " << sum << "\n";
    }
    cout << ans;
    return 0;
}
