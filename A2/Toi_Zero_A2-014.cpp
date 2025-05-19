#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unordered_set <char> s={'l','o','v','e'};
    string str1,str2;
    cin >> str1 >> str2;
    if(str1.size()>str2.size()) swap(str1,str2);
    int n=str2.size(),m=str1.size();
    for(int i=0;i<n-m;i++){
        str1+=str1[i];
    }
    string code;
    for(int i=0;i<n;i++){
        if(s.count(tolower(str1[i])) || s.count(tolower(str2[i]))){
            code+='w';
        }
        else{
            code+='$';
        }
    }
    int cnt=0,streak=0,tmp=0;
    for(char c:code){
        if(c=='w'){
            cnt++;
            tmp++;
            streak=max(streak,tmp);
        }
        else{
            tmp=0;
        }
    }
    if(cnt&1){
        code+=to_string(streak);
    }
    else if(streak<2){
        code+='#';
    }
    cout << code;
    return 0;
}
