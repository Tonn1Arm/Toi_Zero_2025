#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mx=INT_MIN,x;
    for(int i=0;i<3;i++){
        scanf("%d",&x);
        mx=max(x,mx);
    }
    printf("%d",mx);
    return 0;
}
