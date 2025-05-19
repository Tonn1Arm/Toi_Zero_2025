#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c,chk[]={'a','e','i','o','u','\0'};
    bool ck=0;
    scanf("%c",&c);
    for(int i=0;chk[i];i++){
        if(c==chk[i]){ck=1;break;};
    }
    printf((ck) ? "yes" : "no");
    return 0;
}
