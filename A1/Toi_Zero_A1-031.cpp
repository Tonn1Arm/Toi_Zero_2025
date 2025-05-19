#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin >> str;
    int mod=str.size()%3;
    cout << str[0];
    for(int i=1;str[i];i++){
        if(i%3==mod)cout<< ",";
        cout << str[i];
    }
    return 0;
}
