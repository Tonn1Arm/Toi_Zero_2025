#include <iostream>
using namespace std;

int main()
{
    int x;
    char c;
    scanf("%d %c",&x,&c);
    printf((x<18 || toupper(c)=='S') ? "20" : "50");
    return 0;
}
