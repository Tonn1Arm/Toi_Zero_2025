#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int cnt=1;
    cin >> str;
    for(int i=1;str[i];i++){
        if(str[i]==str[i-1]){
            cnt++;
        }
        else{
            cout<< cnt << str[i-1];
            cnt=1;
        }
    }
    cout << cnt << ((str[str.size()-1]==str[str.size()-2])? str[str.size()-2] : str[str.size()-1]);
    return 0;
}
