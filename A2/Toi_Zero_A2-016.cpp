#include <bits/stdc++.h>
using namespace std;
int strchk(string str,string chk){
    int sz=str.size(),cnt=0;
    for(int i=sz-1;i>=0;i--){
        if(str[i]==chk[i]){
            cnt++;continue;
        }
        break;
    }
    return (cnt==2 || cnt==3 || cnt==5) ? cnt : 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char chc,c;
    string n,str;
    cin >> chc >> n >> c >> str;
    int cnt=strchk(str,n),val=0;
    if(cnt!=0){
        switch(cnt){
            case 2 : val=100;break;
            case 3 : val=200;break;
            case 5 : val=100000;break;
        }
        cout << ((chc==c) ? val*10 : val);
    }
    else{
        cout << ((chc==c) ? 20 : 0);
    }
    return 0;
}
