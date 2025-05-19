#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str[4]={"winter","spring","summer","fall"};
    int m,d,arr;
    scanf("%d %d",&m,&d);
    arr=((m-1)/3);
    if(m%3==0&&d>=21){
        arr++;
    }
    arr%=4;
    cout << str[arr];
    return 0;
}
