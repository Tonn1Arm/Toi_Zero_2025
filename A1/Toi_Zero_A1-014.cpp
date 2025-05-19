#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mx=INT_MAX,x;
    for(int i=0;i<3;i++){
        scanf("%d",&x);
        mx=min(x,mx);
    }
    printf("%d",mx);
    return 0;
}
