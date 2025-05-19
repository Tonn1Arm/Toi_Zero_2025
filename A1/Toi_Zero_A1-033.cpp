#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,cnt=0;
    cin >> n;
    char c;
    unordered_set <char> s={'A','E','I','O','U'};
    while(n--){
        cin >> c;
        if(s.count(c))cnt++;
    }
    cout << cnt;
    return 0;
}
