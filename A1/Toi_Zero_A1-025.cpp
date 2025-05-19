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
    unordered_map <string,string> mp;
    mp["Q"]="queen",mp["J"]="jack",mp["K"]="king",mp["A"]="ace",mp["D"]="diamonds",mp["H"]="hearts",mp["S"]="spades",mp["C"]="clubs";
    string fnt=str.substr(0,str.size()-1),bac=str.substr(str.size()-1);
    if(mp.count(fnt))cout << mp[fnt] << " of " << mp[bac];
    else cout << fnt << " of " << mp[bac];
    return 0;
}
