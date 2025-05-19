#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll coin;
    scanf("%lld",&coin);
    (coin >= 10) ? (printf("10 = %lld\n",coin/10),coin%=10) : (printf("10 = 0\n"));
    (coin >= 5) ? (printf("5 = %lld\n",coin/5),coin%=5) : (printf("5 = 0\n"));
    (coin >= 2) ? (printf("2 = %lld\n",coin/2),coin%=2) : (printf("2 = 0\n"));
    (coin >= 1) ? (printf("1 = %lld",coin)) : (printf("1 = 0"));
    return 0;
}
