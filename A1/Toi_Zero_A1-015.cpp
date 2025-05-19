#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str1,str2,num;
    cin >> str1 >> str2 >> num;
    if(str1.size()>5 || str2.size()>5){
        cout << str1.substr(0,2) << str2[str2.size()-1] << num[1] ;
    }
    else{
        cout << str1[0] << num << str2[str2.size()-1];
    }
    return 0;
}
