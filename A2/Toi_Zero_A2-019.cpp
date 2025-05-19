#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string str,tmp;
    cin >> str;
    tmp=str;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    auto it=str.begin();
    int mx=0,mk=0;bool fin=0;
    while(it!=str.end()){
        if(*it=='B'){
            if(!fin) mk=it-str.begin();
            ++it;fin=1;
            int cnt=0;
            while(it!=str.end() && *it=='U'){
                cnt++;
                ++it;
            }
            mx=max(mx,cnt);
        }
        else ++it;
    }
    if(mx>=2){
        cout << "Yes " << mx;
    }
    else{
        string s="BUU";
        for(int i=0;i<str.size();i++){
            if(!fin){
                cout << s[i%3];
            }
            else if(i<=mk)cout << tmp[i];
            else cout << 'U';
        }
    }
    return 0;
}
