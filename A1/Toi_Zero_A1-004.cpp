#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    bool chk=0;
    scanf("%d",&x);
    chk= (x>=5) ? chk : 1;
    scanf("%d",&x);
    chk= (x>=20)? chk : 1;
    scanf("%d",&x);
    chk= (x>=25)? chk : 1;
    (chk) ? printf("fail") : printf("pass");
    return 0;
}
