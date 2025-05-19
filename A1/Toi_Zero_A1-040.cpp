#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,sum=0,arr[5]={0,100,120,200,60};
    while(1){
        cin >> x;
        if(x==5) break;
        sum+=arr[x];
    }
    cout << "Bye Bye\nTotal Calories: " << sum;
    return 0;
}
