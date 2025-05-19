#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    char c;
    cin >> str >> c;
    string tmp;
    tmp.resize(str.size());
    reverse_copy(str.begin(),str.end(),tmp.begin());
    cout << stoi(str) << " " << c << " " << stoi(tmp) << " = ";
    switch(c){
        case '+' : cout << stoi(str)+stoi(tmp);
        break;
        case '-' : cout << stoi(str)-stoi(tmp);
        break;
        case '*' : cout << stoi(str)*stoi(tmp);
        break;
        case '/' : cout << stoi(str)/stoi(tmp);
        break;
    }
    return 0;
}
