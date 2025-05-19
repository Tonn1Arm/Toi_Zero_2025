#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin >> str;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    int amx=0,cur=0;
    char prev=' ';
    bool opr=false,prev_R=false,stk_A=false,nott=false;
    for(auto c=str.begin();c!=str.end();++c){
        if(*c!='T' && *c!='I'){
            opr=true;
        }
        if(prev=='B' && (*c!='T' && *c!='I')){
            nott=true;
        }
        if(prev_R && *c=='A'){
            cur++;amx=max(cur,amx);
            stk_A=true;
        }
        else if(prev_R && !stk_A){
            nott=true;
        }
        else{
            cur=0;
            prev_R=false;
            stk_A=false;
        }
        if(*c=='A' && (prev!='R' && prev!='A')) nott=true;
        if(*c=='R') prev_R=true;
        prev=*c;
        if(nott){
            cout << "no " << c-str.begin() << "\n";
            return 0;
        }
    }
    if(str.back()=='B' || str.back()=='R') cout << "no " << str.size()-1;
    else if(!opr) cout << "unknown " << str.size() << "\n";
    else cout << "yes " << amx << "\n";
    return 0;
}
