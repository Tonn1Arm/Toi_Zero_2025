#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int str;
    scanf("%c %d",&c,&str);
    if(c=='H' && str==4567)cout << "safe unlocked";
    else if(c=='H')cout << "safe locked - change digit";
    else if(str==4567)cout << "safe locked - change char";
    else cout << "safe locked";
    return 0;
}
