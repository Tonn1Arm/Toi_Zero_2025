#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    int cnt=0;
    cin >> str;
    unordered_set <char> mp={'a','e','i','o','u'};
    for(int i=0;str[i];i++){
        if(mp.count(str[i])) cnt++;
    }
    cout << cnt;
    return 0;
}
