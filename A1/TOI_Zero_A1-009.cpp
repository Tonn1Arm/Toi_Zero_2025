#include <iostream>
using namespace std;

int main()
{
    int x,sum;
    scanf("%d %d",&x,&sum);
    sum+=x;
    printf("%d\n%s",sum,(sum>=50)? "pass" : "fail");
    return 0;
}
